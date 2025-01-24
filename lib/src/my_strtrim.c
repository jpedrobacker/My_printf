#include "mylib.h"

static int	my_char_is_true(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	my_start_str(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && my_char_is_true(s1[start], set))
		start++;
	return (start);
}

static size_t	my_end_str(char const *s1, char const *set, size_t start)
{
	size_t	end;

	end = my_strlen(s1);
	while (end > start && my_char_is_true(s1[end - 1], set))
		end--;
	return (end);
}

char	*my_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = my_start_str(s1, set);
	end = my_end_str(s1, set, start);
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (0);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}

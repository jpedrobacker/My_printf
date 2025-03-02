#include "mylib.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] != c)
		{
			i++;
			while (s[j] && s[j] != c)
				j++;
		}
		else
			j++;
	}
	return (i);
}

static size_t	word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	my_split_free(char **arr, size_t j)
{
	while (j > 0)
	{
		free(arr[j]);
		j--;
	}
	free(arr);
}

static char	**my_real_split(const char *s, char c, char **arr)
{
	size_t	wordl;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			wordl = word_len(s + i, c);
			arr[j] = (char *)malloc((wordl + 1) * sizeof(char));
			if (!arr[j])
				my_split_free(arr, j);
			k = 0;
			while (k < wordl)
				arr[j][k++] = s[i++];
			arr[j++][wordl] = '\0';
		}
	}
	arr[j] = NULL;
	return (arr);
}

char	**my_split(const char *s, char c)
{
	char	**arr;

	if (!s)
		return (0);
	arr = (char **)malloc((count_words(s, c) + 1) * sizeof(*arr));
	if (!arr)
		return (NULL);
	my_real_split(s, c, arr);
	return (arr);
}

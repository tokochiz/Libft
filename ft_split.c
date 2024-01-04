/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 22:41:53 by  ctokoyod         #+#    #+#             */
/*   Updated: 2024/01/04 15:29:02 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	return (words);
}

int	count_word_len(char const *s, char c)
{
	int	word_length;

	// int	j;
	// j = 0;
	word_length = 0;
	while (*s == c && *s != '\0')
		s++;
	word_length = 0;
	while (*s != c && *s != '\0')
	{
		word_length++;
		s++;
	}
	return (word_length);
}

char	*make_malloc_s_split(char const *s, int word_length)
{
	int		i;
	char	*word;

	word = (char *)malloc(sizeof(char) * (word_length + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < word_length)
	{
		word[i] = s[i];
		i++;
	}
	word[word_length] = '\0';
	return (word);
}

static void	free_words(char **words_array, int i)
{
	while (i >= 0)
	{
		free(words_array[i]);
		i--;
	}
	free(words_array);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word_length;
	char	**words_array;
	int		s_len;

	s_len=ft_strlen(s);
	words_array = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (words_array == NULL)
		return (NULL);
	i = 0;
	while (i < count_words(s, c))
	{
		word_length = count_word_len(s, c);
		words_array[i] = make_malloc_s_split(s + s_len - word_length,
			word_length);
		printf("%d %s", word_length, s);
		if (words_array[i] != NULL)
		{
			free_words(words_array, i - 1);
			return (NULL);
		}
		i++;
	}
	words_array[count_words(s, c)] = NULL;
	return (words_array);
}

int	main(void)
{
	char const *str = "&&&5*4*7*76&*aaa";
	char charset = '*';
	char **result;
	int words;
	int i;

	printf("str[%s]charset[%c]\n", str, charset);
	result = ft_split(str, charset);
	words = count_words(str, charset);
	printf("words : %d\n", words);

	i = 0;

	while (result[i] != NULL)
	{
		printf("split[%d]:[%s]\n", i, result[i]);
		i++;
	}
	free_words(result, words - 1);
	return (0);
}
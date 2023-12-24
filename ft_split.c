/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 22:41:53 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/24 12:22:00 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_words(char const *s, char c)
{
	int	same_c;
	int	words;
	int	i;

	same_c = 0;
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

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		s_words;
	int		word_length;
	char	**words_array;

	s_words = count_words(s, c);
	words_array = (char **)malloc(sizeof(char *) * (s_words + 1));
	if (words_array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < s_words)
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		word_length = 0;
		while (s[j] != c && s[j] != '\0')
		{
			word_length++;
			j++;
		}
		words_array[i] = make_malloc_s_split(&s[j - word_length], word_length);
		i++;
	}
	words_array[s_words] = NULL;
	return (words_array);
}

// int	main(void)
// {
// 	char const *str = "&&&5 4*7 76& aaa";
// 	char charset = ' ';
// 	char **result;
// 	int words;
// 	int i;
// 	int j;

// 	printf("str[%s]charset[%c]\n", str, charset);
// 	result = ft_split(str, charset);
// 	words = count_words(str, charset);
// 	printf("words : %d\n", words);

// 	i = 0;

// 	while (result[i] != NULL)
// 	{
// 		printf("split[%d]:[%s]\n", i, result[i]);
// 		i++;
// 	}

// 	return (0);
// }
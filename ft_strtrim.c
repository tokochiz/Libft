/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:48:03 by  ctokoyod         #+#    #+#             */
/*   Updated: 2024/01/04 12:59:33 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strset_tail(char const *str, char const *set)
{
	int		i;
	int		j;
	size_t	str_len;

	str_len = ft_strlen(str);
	i = str_len - 1;
	j = 0;
	while (i >= 0)
	{
		if (is_set(set, str[i]))
		{
			i--;
			j++;
		}
		else
			break ;
	}
	return (str_len - j);
}

char	*ft_strset_top(char const *str, char const *set)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_set(set, str[i]))
			i++;
		else
			break ;
	}
	return ((char *)str + i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_start;
	size_t	trim_end;
	size_t	total_len;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	trim_start = ft_strset_top(s1, set);
	trim_end = ft_strset_tail(trim_start, set);
	total_len = trim_end + 1;
	result = (char *)malloc(sizeof(char) * (total_len));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, trim_start, total_len);
	return (result);
}

//  int	main(void)
// {
// 	char s1[] = "1234AAA1234";
// 	char set[] = "1234";

// 	char *result = ft_strtrim(s1, set);
// 	if (result)

// 	{
// 		// 結果を出力するか、適切な処理を行います
// 		printf("結果: %s\n", result);
// 		free(result); // メモリを解放する
// 	}

// 	return (0);
// }
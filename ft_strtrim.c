/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 20:48:03 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/06 23:05:03 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strset_tail(char const *str, char const *set)
{
	int		i;
	int		j;
	size_t	str_len;

	str_len = ft_strlen(str) - 1;
	i = 0;
	while (str_len >= 0)
	{
		j = 0;
		while (set[j] != '\0' && str[i] != set[i + j])
		{
			str_len--;
			j++;
		}
		i++;
	}
	return ((char *)str + i);
}

char	*ft_strset_top(char const *str, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (set[i + j] != '\0' && str[i] != set[i + j])
		{
			str++;
			j++;
		}
		if (set[i])
			i++;
	}
	return ((char *)str + i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_start;
	char	*trim_end;
	size_t	total_len;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	trim_start = ft_strset_top(s1, set);
	trim_end = ft_strset_tail(trim_start, set);
	total_len = ft_strlen(trim_start) - ft_strlen(trim_end) + 1;
	result = (char *)malloc(sizeof(char) * (total_len + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, trim_start, total_len);
	result[total_len] = '\0';
	return (result);
}

int	main(void)
{
	char s1[] = "1234AAA22331122";
	char set[] = "1234";

	char *result = ft_strtrim(s1, set);
	if (result)
	
	{
		// 結果を出力するか、適切な処理を行います
		printf("結果: %s\n", result);
		free(result); // メモリを解放することを忘れずに
	}

	return (0);

	
}
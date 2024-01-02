/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:56:01 by  ctokoyod         #+#    #+#             */
/*   Updated: 2024/01/02 18:58:58 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char		target;

	target = (unsigned char)c;
	tmp = (unsigned char *)s;
	while (n > 0)
	{
		if (*tmp == target)
			return ((void *)tmp);
		tmp++;
		n--;
	}
	return (NULL);
}
// int	main(void)
// {
// 	const char str[] = "Hello, World!";
// 	char target_char = 'E';

// 	// ft_memchr 関数を使用して文字 'W' を検索
// 	void *result = ft_memchr(str, target_char, sizeof(str));

// 	if (result != NULL)
// 	{
// 		// 文字が見つかった場合
// 		printf("Character '%c' found at position: %ld\n", target_char,
// 			(char *)result - str);
// 	}
// 	else
// 	{
// 		// 文字が見つからなかった場合
// 		printf("Character '%c' not found.\n", target_char);
// 	}

// 	return (0);
// }
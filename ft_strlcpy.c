/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctokoyod <ctokoyod@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:15:37 by  ctokoyod         #+#    #+#             */
/*   Updated: 2024/01/23 00:19:02 by ctokoyod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*dst_c;
	const char	*src_c;
	size_t		len;
	int i;
	
	dst_c = dst;
	src_c = src;
	len = 0;
	len = ft_strlen(src_c);
	if (dstsize == 0)
	{
		return (len);
	}
	i = 0;
	while (src_c[i] != '\0' && dstsize - 1)
	{
		dst_c[i] = src_c[i];
		i++;
		dstsize--;
	}
	dst_c[i] = '\0';
	return (len);
}

// int	main(void)
// {
// 	char		dst[20];
// 	const char	*src;
// 	size_t		len;

// 	src = "Hello, World!";
// 	len = ft_strlcpy(dst, src, sizeof(dst));
// 	printf("Copied string: %s\n", dst);
// 	printf("Length of the copied string: %zu\n", len);
// 	return (0);
// }

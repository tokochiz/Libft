/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 20:15:37 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/11/25 21:13:11 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*x;
	const char	*y;
	size_t		len;

	x = dst;
	y = src;
	len = 0;
	len = ft_strlen(y);
	if (dstsize == 0)
	{
		return (len);
	}
	while (*y != '\0' && dstsize - 1)
	{
		*x = *y;
		x++;
		y++;
		dstsize--;
	}
	if (dstsize > 0)
	{
		*x = '\0';
	}
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

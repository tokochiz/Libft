/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:14:31 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/11/26 14:00:28 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	dstlen;
	unsigned int	srclen;
	unsigned int	maxcpsize;
	unsigned int	cpcount;
	char			*dsttail;

	if (dst == NULL || src == NULL)
		return (0);
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	dsttail = dst + dstlen;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	maxcpsize = dstsize - dstlen - 1;
	cpcount = 0;
	while (cpcount < maxcpsize && *src != '\0')
	{
		*dsttail = *src;
		src++;
		dsttail++;
		cpcount++;
	}
	*dsttail = '\0';
	return (dstlen + srclen);
}

// int main(void)
// {
//     char dest[20] = "Hello, ";
//     const char *src = "world!";
//     size_t dest_size = sizeof(dest);

//     printf("Before strlcat:\n");
//     printf("dest: %s\n", dest);
//     printf("src: %s\n", src);

//     size_t result = ft_strlcat(dest, src, dest_size);

//     printf("\nAfter strlcat:\n");
//     printf("dest: %s\n", dest);
//     printf("Result: %zu\n", result);

//     return (0);
// }

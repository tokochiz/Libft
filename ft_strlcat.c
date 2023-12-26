/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:14:31 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/26 22:16:03 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	maxcpsize;
	size_t	cpcount;
	char			*dst_tail;

	if (dst == NULL || src == NULL)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	dst_tail = dst + dst_len;
	if (dst_size <= dst_len)
		return (dst_size + src_len);
		
	maxcpsize = dst_size - dst_len - 1;
	cpcount = 0;
	while (cpcount++ < maxcpsize && *src != '\0')
	{
		*dst_tail = *src;
		src++;
		dst_tail++;
	}
	*dst_tail = '\0';
	return (dst_len + src_len);
}

// int main(void)
// {
//     char dest[10] = "Hello, ";
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

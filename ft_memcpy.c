/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:52:40 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/02 22:30:17 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*x;
	unsigned char		*y;

	x = (const unsigned char *)src;
	y = (unsigned char *)dst;
	while (n-- > 0)
	{
		*(y++) = *(x++);
	}
	return ((void *)dst);
}


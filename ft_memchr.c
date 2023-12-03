/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:56:01 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/03 16:51:32 by  ctokoyod        ###   ########.fr       */
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

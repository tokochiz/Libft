/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:34:02 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/11/19 21:37:27 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = buf;
	value = (unsigned char)ch;
	while (n-- > 0)
	{
		*ptr++ = value;
	}
	return (buf);
}

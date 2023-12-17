/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:25:39 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/06 21:23:01 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && (unsigned char *)s1 != '\0' && (unsigned char *)s2 != '\0'
		&& (unsigned char *)s1 == (unsigned char *)s2)
	{
		s1++;
		s2++;
		n--;
	}
	if ((*s1 == '\0' && *s2 == '\0') || n == 0)
	{
		return (0);
	}
	return (*s1 - *s2);
}

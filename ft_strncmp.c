/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 18:25:39 by  ctokoyod         #+#    #+#             */
/*   Updated: 2024/01/02 16:16:01 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n-- > 0 && ((unsigned char)s1[i] != '\0'
			|| (unsigned char)s2[i] != '\0'))
	{
		if (((unsigned char)s1[i] != (unsigned char)s2[i]))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

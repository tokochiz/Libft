/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:10:24 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/11/18 18:32:04 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(char c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	char c = '9';

// 	printf("%d", ft_isdigit(c));
// }
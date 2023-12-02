/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 22:42:33 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/02 22:54:02 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	const unsigned char *tmp;
	tmp = *str;
	int ans;
	while(tmp != '\0')
	{
		if(tmp == '-')
			ans = ans * -1;
	
	}
	
}
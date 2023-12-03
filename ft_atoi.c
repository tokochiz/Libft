/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 22:42:33 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/03 16:16:15 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(const char *str)
{
	if (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			sign;
	long		result;

	sign = 1;
	result = 0;
	while (*str != '\0')
	{
		while (ft_isspace(str))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign = sign * -1;
			str++;
			while (*str >= '0' && *str <= '9')
			{
				result = result * 10 + (*str - '0');
				str++;
			}
		}
		return (int)(sign * result);
	}
	return 0;
}

int	main(void)
{
	const char *str = "  -12345abc";
	int result = ft_atoi(str);

	printf("Result: %d\n", result);

	return (0);
}
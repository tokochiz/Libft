/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 22:42:33 by  ctokoyod         #+#    #+#             */
/*   Updated: 2024/01/16 21:40:37 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char *str)
{
	if (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v')
	{
		return (1);
	}
	return (0);
}

static const char	*move_to_digit(const char *str, int *sign)
{
	while (ft_isspace(str))
	{
		str++;
	}
	if (*str == '-')
		*sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	str = move_to_digit(str, &sign);
	while (*str >= '0' && *str <= '9')
	{
		if ((LONG_MAX - (*str - '0')) / 10 < (sign * result))
			return (-1);
		if ((LONG_MIN + (*str - '0')) / 10 > (sign * result))
			return (0);
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

// int	main(void)
// {
// 	const char *str = "-922337203685477581";

// 	printf("Result: %d\n", ft_atoi(str));
// 	printf("Result: %d\n", atoi(str));

// 	return (0);
// }
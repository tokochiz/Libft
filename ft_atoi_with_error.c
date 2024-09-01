/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_with_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctokoyod <ctokoyod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 22:42:33 by  ctokoyod         #+#    #+#             */
/*   Updated: 2024/09/01 17:16:02 by ctokoyod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	check_str(const char *str, int *error)
{
	if (*str != '\0')
	{
		*error = 1;
	}
	return (0);
}

static bool	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v')
		return (TRUE);
	return (FALSE);
}

static const char	*move_to_digit(const char *str, int *sign)
{
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		*sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	return (str);
}

int	ft_atoi_with_error(const char *str, int *error)
{
	int		sign;
	long	result;

	sign = 1;
	result = 0;
	*error = 0;
	str = move_to_digit(str, &sign);
	if (!*str)
	{
		*error = 1;
		return (0);
	}
	while (ft_isdigit(*str))
	{
		if ((LONG_MAX - (*str - '0')) / 10 < (sign * result))
			return ((int)LONG_MAX);
		if ((LONG_MIN + (*str - '0')) / 10 > (sign * result))
			return ((int)LONG_MIN);
		result = result * 10 + (*str - '0');
		str++;
	}
	check_str(str, error);
	return ((int)(sign * result));
}


// int	main(void)
// {
// 	const char *str = "-922337203685477581";

// 	printf("Result: %d\n", ft_atoi(str));
// 	printf("Result: %d\n", atoi(str));

// 	return (0);
// }
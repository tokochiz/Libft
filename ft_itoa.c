/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:40:59 by  ctokoyod         #+#    #+#             */
/*   Updated: 2024/01/04 12:15:40 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_n_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*set_number(int n, int sign, int n_len, char *n_str)
{
	if (sign == 1)
		n_str[0] = '-';
	n_str[n_len + sign] = '\0';
	while (n_len > 0)
	{
		n_len--;
		n_str[n_len + sign] = (n % 10) + '0';
		n = n / 10;
	}
	return (n_str);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		n_len;
	char	*n_str;
	char	*special_case_intmin;

	sign = 0;
	n_len = 0;
	if (n == -2147483648)
	{
		special_case_intmin = ft_strdup("-2147483648");
		return (special_case_intmin);
	}
	if (n < 0)
	{
		sign = 1;
		n = n * -1;
	}
	n_len = count_n_len(n);
	n_str = (char *)malloc(sizeof(char) * (sign + n_len + 1));
	if (n_str == NULL)
		return (NULL);
	n_str = set_number(n, sign, n_len, n_str);
	return (n_str);
}

// int	main(void)
// {
// 	// さまざまな入力でテスト
// 	printf("整数: %d\n文字列: %s\n", 12345, ft_itoa(12345));
// 	printf("整数: %d\n文字列: %s\n", -6789, ft_itoa(-6789));
// 	printf("整数: %d\n文字列: %s\n", 0, ft_itoa(0));
// 	printf("整数: %d\n文字列: %s\n", INT_MAX, ft_itoa(INT_MAX));
// 	printf("整数: %d\n文字列: %s\n", INT_MIN, ft_itoa(INT_MIN));
// 	return (0);
// }

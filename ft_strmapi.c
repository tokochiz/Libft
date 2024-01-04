/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 18:13:30 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/24 21:56:26 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	result = ft_strdup(s);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}

char	f_tolower(unsigned int i, char c)
{
	(void)i;
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}

// int	main(void)
// {
// 	char const	*str;
// 	char		*result;

// 	str = "ABCDE";
// 	result = ft_strmapi(str, f_tolower);
// 	printf("%s\n", result);
// 	return (0);
// }

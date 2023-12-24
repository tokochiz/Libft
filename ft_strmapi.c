/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 18:13:30 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/24 19:46:30 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;
	size_t	s_len;

	if (s == NULL || f == NULL)
		return (NULL);
	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	result = (char *)malloc(sizeof(char) * (s_len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[s_len] = '\0';
	return (result);
}

char	f_tolower(unsigned int i, char c)
{
	(void)i;
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}

int	main(int argc, char **argv)
{
	char *str = NULL;

	const char s[] = "ABCDE";
	(void)argc;
	if (argv[1][0] == '1')
		str = ft_strmapi(s, &f_tolower);

	if (str != NULL) // NULL でないことを確認
	{
		printf("%s\n", str);
		free(str);
	}
	return (0);
}
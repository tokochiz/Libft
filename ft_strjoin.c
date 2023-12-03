/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:50:57 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/03 20:52:53 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char const *src)
{
	char	*d;

	d = dest;
	while (*d != '\0')
		d++;
	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*result;
	char	*d;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * total_len + 1);
	if (result == NULL)
		return (NULL);
	d = result;
	while (*s1 != '\0')
	{
		*d = *s1;
		d++;
		s1++;
	}
	d = ft_strcat(d, s2);
	return (result);
}

int	main(void)
{
	const char *s1 = "Hello, |";
	const char *s2 = "|World!";
	char *result = ft_strjoin(s1, s2);

	if (result != NULL)
	{
		// Output the joined string
		printf("Joined String: %s\n", result);

		// Don't forget to free the allocated memory
		free(result);
	}
	else
	{
		fprintf(stderr, "Memory allocation failed.\n");
	}

	return (0);
}
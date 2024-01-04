/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:24:31 by  ctokoyod         #+#    #+#             */
/*   Updated: 2024/01/04 22:27:34 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cp;
	size_t	len;
	int		i;

	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1);
	cp = (char *)malloc(sizeof(char) * (len + 1));
	if (cp != NULL)
	{
		i = 0;
		while (*s1 != '\0')
		{
			cp[i] = *s1;
			i++;
			s1++;
		}
		cp[len] = '\0';
	}
	return (cp);
}
// int main()
// {
//     const char *original = "Hello, World!";
//     char *duplicate = ft_strdup(original);

//     if (duplicate != NULL)
//     {
//         printf("Original : %s\n", original);
//         printf("Duplicate: %s\n", duplicate);

//         // 使用が終わったらメモリを解放
//         free(duplicate);
//     }

//     return (0);
// }
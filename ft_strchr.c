/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:41:31 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/03 17:10:14 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strchr(const char *s, int c)
{
	const char	*tmp;
	char		ch;

	tmp = s;
	ch = (char)c;
	while (*tmp != '\0')
	{
		if (*tmp == ch)
		{
			return ((char *)tmp);
		}
		tmp++;
	}
	if (ch == '\0')
		return ((char *)tmp);
	return (NULL);
}

// int main(void)
// {
//     char test[20] = "abcdefg";
//     char *p;

//     p = ft_strchr(test, 'b');
//     if (p != NULL)
//     {
//         printf("ans:%s\n", p);
//     }
//     else
//     {
//         printf("not found\n");
//     }

//     return (0);
// }
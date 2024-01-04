/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:43:53 by  ctokoyod         #+#    #+#             */
/*   Updated: 2024/01/04 12:56:48 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*tmp;
	unsigned char	*last;
	char			ch;

	tmp = (unsigned char *)s;
	last = NULL;
	ch = (char)c;
	while (*tmp != '\0')
	{
		if (*tmp == ch)
			last = tmp;
		tmp++;
	}
	if (ch == '\0')
		return ((char *)tmp);
	return ((char *)last);
}
// int main(void)
// {
//     char test[20] = "abcdebg";
//     char *p;

//     p = ft_strrchr(test, 'b');
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

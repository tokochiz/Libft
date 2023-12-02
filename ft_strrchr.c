/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:43:53 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/02 19:43:35 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *tmp;
	const char *last;
    tmp = s;
	last = NULL;
    while (*tmp != '\0')
    {
        if (*tmp == c)
			last = tmp;
        tmp++;
    }
    return (char *)last;
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

//     return 0;
// }


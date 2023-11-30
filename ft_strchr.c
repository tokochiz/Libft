/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctokoyod <ctokoyod@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 00:06:45 by ctokoyod          #+#    #+#             */
/*   Updated: 2023/11/27 00:06:45 by ctokoyod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    const char *tmp;
    tmp = s;
    while (*tmp != '\0')
    {
        if (*tmp == c)
        {
            return (char *)tmp;
        }
        tmp++;
    }
    return NULL;
}

int main(void)
{
    char test[20] = "abcdefg";
    char *p;

    p = ft_strchr(test, 'b');
    if (p != NULL)
    {
        printf("ans:%s\n", p);
    }
    else
    {
        printf("not found\n");
    }

    return 0;
}
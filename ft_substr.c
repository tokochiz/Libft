/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  ctokoyod < ctokoyod@student.42tokyo.jp    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:21:23 by  ctokoyod         #+#    #+#             */
/*   Updated: 2023/12/03 18:49:42 by  ctokoyod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ch;
	size_t s_len;
	size_t i;
	i = 0;

	s_len = ft_strlen(s);
	if (start >= s_len || len == 0)
		return (NULL);

	if(len >= s_len - start)
		len = s_len - start;

	ch = (char *)malloc(sizeof(char) * len + 1);
	if(ch == NULL)
		return NULL;
		
	while (i < len)
	{
		ch[i] = s[start + i];
		i++;
	}
	ch[len] = '\0';
	return (ch);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:25:12 by kgriset           #+#    #+#             */
/*   Updated: 2024/01/30 12:01:05 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*create_sub(const char *s, char *sub, unsigned int start,
		size_t len)
{
	size_t	i;

	i = 0;
	while (s[start + i] && i != len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	l_s;

	i = 0;
	l_s = ft_strlen(s);
	if (start > l_s)
	{
		sub = malloc(sizeof(char));
		if (!sub)
			return (NULL);
		*sub = '\0';
		return (sub);
	}
	while (s[start + i] && i != len)
		i++;
	sub = malloc(i * sizeof(char) + sizeof(char));
	if (!sub)
		return (NULL);
	else
	{
		sub = create_sub(s, sub, start, len);
		return (sub);
	}
}

//#include <stdio.h>
//#include <stdlib.h>
// int main ()
//{
//	char *str = "Hello 42";
//	char *sub = ft_substr(str, 0, 5);
//	printf("%s\n",sub);
//	free(sub);
//	return (1);
//}

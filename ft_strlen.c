/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:51:26 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/15 15:38:26 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

//#include <stdio.h>
//#include <string.h>
// int main() {
//    printf("ft_strlen: %zu\n", ft_strlen("hello"));
//    printf("strlen: %zu\n", ft_strlen("hello"));
//    return (1);
//}

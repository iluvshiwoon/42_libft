/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgriset <kgriset@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:23:02 by kgriset           #+#    #+#             */
/*   Updated: 2023/11/13 12:32:21 by kgriset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2){
    size_t l_s1;
    size_t l_s2;
    char *j_string;

    l_s1 = ft_strlen(s1);
    l_s2 = ft_strlen(s2);
    j_string = malloc((l_s2+l_s1)*sizeof(char) + sizeof(char));
    ft_strlcpy(j_string, s1, l_s1+1);
    ft_strlcpy(j_string+l_s1,s2, l_s2 + 1); 
    return (j_string);
}

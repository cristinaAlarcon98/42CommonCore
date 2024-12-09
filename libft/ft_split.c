/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:50:30 by cralarco          #+#    #+#             */
/*   Updated: 2024/11/26 16:34:52 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c)
{
    char **array;
    char *s1;
    char *s2;

    s1 = malloc(ft_strlen(s) + 1);
    s2 = malloc(ft_strlen(s) + 1);
    if(!s1 || !s2)
        return (NULL); 

    while(*s && *s != c)
    {
        array[i][0] = *s;
        *s++;
    }
    while (*s)
    {
        array[0][j];
        i++;
    }
    

}
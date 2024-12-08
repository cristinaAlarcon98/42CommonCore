/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:07:38 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/06 13:53:46 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr = malloc(len + 1);
    int i;
    
    i = 0;
    if(!substr)
        return(NULL);
    while (i < len)
    {
        substr[i] = s[start + i];
        i++;
        
    }
    substr[i] = '\0';
    return (substr);
}

/*
int main()
{
    char const *s = "hola soy cristina";
    printf("%s\n", ft_substr(s, 9, 8));
    printf("%c\n", s[16]);



}
*/
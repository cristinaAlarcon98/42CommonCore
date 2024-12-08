/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:09:53 by cralarco          #+#    #+#             */
/*   Updated: 2024/11/28 11:30:24 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *s)
{
	int	length;

	length = 0;
	while (s[length] != 0)
	{
		length++;
	}
	return (length);
}

char *ft_strjoin(char const *s1, char const *s2)
{   int i;
    size_t s1_len = ft_strlen(s1);
    size_t s2_len = ft_strlen(s2);
    char *new_str = malloc(s1_len + s2_len + 1);


    i = 0;
    while(*s1)
    {
        new_str[i] = *s1;
        s1++; 
        i++;
    }
    while(*s2)
    {
        new_str[i] = *s2;
        s2++; 
        i++;
    }
    new_str[i] = 0;
    return (new_str);
}

int main()
{
    char const *s1 = "cris";
    char const *s2 = "tina";
    char *new_str = ft_strjoin(s1,s2);
    printf("%s\n", ft_strjoin(s1,s2));
    free(new_str);

}
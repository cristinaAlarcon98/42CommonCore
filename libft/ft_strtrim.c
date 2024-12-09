/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:09:58 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/09 15:34:34 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strtrim(char const *s1, char const *set)
{
	int		trimletter;
	char	*s1cpy_pointer;
	char	*set_pointer;
	char	*s1cpy;

	s1cpy = malloc(ft_strlen(s1) + 1);
	if (!s1cpy)
		return (NULL);
	s1cpy_pointer = s1cpy;
	while (*s1)
	{
		trimletter = 0;
		set_pointer = (char *)set;
		while (*set_pointer)
		{
			if (*s1 == *set_pointer)
				trimletter = 1;
			set_pointer++;
		}
		if (!trimletter)
			*s1cpy_pointer++ = *s1;
		s1++;
	}
	*s1cpy_pointer = '\0';
	return (s1cpy);
}
/*
int main()
{
    char *s1 = "crbicsdtei";
    char const *set = "bdefg";

    char *trimmed = ft_strtrim(s1, set);
    if (trimmed)
    {
        printf("Trimmed string: %s\n", trimmed);
        free(trimmed);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/

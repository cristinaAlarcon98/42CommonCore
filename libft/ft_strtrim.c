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

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	malloc((size_t)ft_strlen(s1)+ 1);
	if (!s2)
	{
		return (NULL);
	}
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		trimletter;
	size_t	beggining;
	size_t	end;

	if (!s1)
		return (NULL);
	if(!set)
		return(ft_strdup(s1));
	


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

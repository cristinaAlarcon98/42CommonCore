/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:32:00 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/06 13:05:40 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
/*
char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = (char *)s + ft_strlen(s) - 1;
	if (c == '\0')
		return (p + 1);
	while (p >= s)
	{
		if ((char)c == *p)
			return (p);
		p--;
	}
	return (0);
}
/*
int main(){
    const char *s = "hello";
    int c;

    c = 'l';
    printf("%s\n",  ft_strrchr(s, 'l'));
}
*/

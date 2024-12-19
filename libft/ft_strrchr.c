/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42londonfr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:32:00 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/19 15:27:56 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

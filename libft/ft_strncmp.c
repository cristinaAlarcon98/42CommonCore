/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42londonfr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:07:38 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/06 13:53:46 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	while (n > 0)
	{
		if (*s1 == 0 || *s2 == 0)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
}
/*
int main(){
    char *s1 = "hello"; 
    char *s2 = "hell";

    printf("%d\n",  ft_strncmp(s1, s2, 5));
}
*/

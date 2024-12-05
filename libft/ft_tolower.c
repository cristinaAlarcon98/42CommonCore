/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42londonfr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 15:05:43 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/05 15:27:24 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}
/*
int main(){
    printf("%c\n",  ft_tolower('a'));
    printf("%c\n",  ft_tolower('A'));
    printf("%c\n",  ft_tolower('T'));
    printf("%c\n",  ft_tolower('3'));
    printf("%c\n",  ft_tolower('Z'));
    printf("%c\n",  ft_tolower('z'));
}
*/

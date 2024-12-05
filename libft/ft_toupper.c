/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:56:21 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/05 15:20:37 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
/*
int main(){
    printf("%c\n",  ft_toupper('a'));
    printf("%c\n",  ft_toupper('A'));
    printf("%c\n",  ft_toupper('T'));
    printf("%c\n",  ft_toupper('3'));
    printf("%c\n",  ft_toupper('r'));
    printf("%c\n",  ft_toupper('R'));
}
*/

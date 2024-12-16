/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42londonfr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:09:53 by cralarco          #+#    #+#             */
/*   Updated: 2024/11/28 11:30:24 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main()
{
	printf("ft_isascii(-13) %d\n", ft_isascii(-13));
	printf("ft_isascii(128) %d\n", ft_isascii(128));
	printf("ft_isascii(44) %d\n", ft_isascii(44));
	printf("ft_isascii(10000) %d\n", ft_isascii(10000));

}
*/

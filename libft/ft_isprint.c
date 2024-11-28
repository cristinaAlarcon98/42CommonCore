/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:37:46 by cralarco          #+#    #+#             */
/*   Updated: 2024/11/28 12:20:54 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main()
{
	printf("ft_isprint(30) %d\n",ft_isprint(30));
	printf("ft_isprint(127) %d\n", ft_isprint(127));
	printf("ft_isprint(1000) %d\n", ft_isprint(1000));

}
*/

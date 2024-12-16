/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putend_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student@42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:40:57 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/09 11:34:21 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>	
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if(num < 0)
	{
		ft_putchar_fd(1, '-');
		num = -num;
	}
	if(num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putchar_fd((num % 10) + '0', fd);
	}
	else
	{
		ft_putchar_fd(num + '0', fd);
	}
		
	
}

int main()
{
	ft_putnbr_fd(-1234, 1);
}

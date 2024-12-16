/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:40:57 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/09 11:34:21 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>	

void ft_putendl_fd(char *s, int fd)
{
	if(!s)
		return;
	while (*s)
		{
			write(1, s, 1);
			s++;
		}
	write(1, "\n", 1);
}
/*
int main()
{
	ft_putendl_fd("hello", 1);
}
*/

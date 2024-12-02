/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@strudent.42london.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:04:52 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/02 19:26:19 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	counter;

	counter = 0;
	if (size == 0)
	{
		return (strlen(src));
	}
	while (counter < size - 1 && src[counter] != 0)
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = 0;
	return (strlen(src));
}

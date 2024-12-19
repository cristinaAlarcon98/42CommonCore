/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@strudent.42london.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 15:04:52 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/17 16:42:05 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;

	counter = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (counter < size - 1 && src[counter] != 0)
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = 0;
	return (ft_strlen(src));
}

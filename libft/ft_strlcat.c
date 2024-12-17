/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:08:25 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/17 16:40:27 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	dest_len;

	dest_len = ft_strlen(dst);
	counter = 0;
	if (dest_len >= size)
	{
		return (ft_strlen(src) + size);
	}
	while (counter < size - dest_len - 1 && src[counter] != '\0')
	{
		dst[dest_len + counter] = src[counter];
		counter++;
	}
	dst[dest_len + counter] = 0;
	return (ft_strlen(src) + dest_len);
}
/*
int main(void)
{

    char src[4] = "CRIS";
    char dst[1] = "";
    size_t my_strlcat;
    size_t normal_strlcat;

    normal_strlcat = strlcat(dst, src, 1);
    printf("Normal strlcat: %zu\n", normal_strlcat);
    printf("dst: %s\n", dst);
}
*/

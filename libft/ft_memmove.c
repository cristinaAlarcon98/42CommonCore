/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:23:59 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/17 18:22:48 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*buffsrc;
	char	*buffdest;

	buffsrc = (char *)src;
	buffdest = (char *)dest;
	if (buffsrc >= buffdest)
	{
		i = 0;
		while (i < n)
		{
			buffdest[i] = buffsrc[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			buffdest[i - 1] = buffsrc[i - 1];
			i--;
		}
	}
	return (dest);
}

/*
void    main()
{
        char src[5] = "abcde";

        ft_memmove(src, src + 2, 3);
        printf("%s\n", src);
}
*/
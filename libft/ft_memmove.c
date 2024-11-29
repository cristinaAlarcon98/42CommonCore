/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:23:59 by cralarco          #+#    #+#             */
/*   Updated: 2024/11/29 19:24:51 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*buffer1;
	char	*buffer2;

	buffer1 = (void *)src;
	buffer2 = (void *)dest;
	if (buffer1 >= buffer2)
	{
		i = 0;
		while (i < n)
		{
			buffer2[i] = buffer1[i];
			i++;
		}
	}
	else
	{
		i = ft_strlen(buffer1);
		while (i > 0)
		{
			buffer2[i - 1] = buffer1[i - 1];
			i--;
		}
	}
}

/*
void    main()
{
        char src[5] = "abcde";

        ft_memmove(src, src + 2, 3);
        printf("%s\n", src);
}
*/

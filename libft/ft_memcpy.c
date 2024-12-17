/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:09:58 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/17 18:18:23 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*buffdest;
	const char	*buffsrc;

	buffdest = (char *)dest;
	buffsrc = (const char *)src;
	while (n > 0)
	{
		*buffdest = *(char *)buffsrc;
		buffdest++;
		buffsrc++;
		n--;
	}
	return (dest);
}
/*
void    main()
{
        char src[5] = "abcde";

        ft_memcpy(src, src + 2, 3);
        printf("%s\n", src);
}
*/

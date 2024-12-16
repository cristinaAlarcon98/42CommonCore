/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42londonfr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:14:09 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/06 15:25:45 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		n--;
		s++;
	}
	return (0);
}

/*
void    main()
{
        char *src = "abcde";
        void *s;

    s = ft_memchr(src, 'c', 2);
    if (s != NULL)
        printf("Found: %s\n", (char *)s);
    else
        printf("Character not found\n");
}
*/

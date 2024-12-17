/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42londonfr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 15:28:19 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/06 18:49:28 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;	
	const char	*str2;

	str1 = (const char *)s1;
	str2 = (const char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		n--;
		str1++;
		str2++;
	}
	return (0);
}

/*
void    main()
{
        char *src1 = "abcde";
        char *src2 = "abcde";
        int n;
        
        n = ft_memcmp(src1, src2, 5);
        printf("%d\n", n);
}
*/

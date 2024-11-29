/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 11:09:58 by cralarco          #+#    #+#             */
/*   Updated: 2024/11/29 12:16:09 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int		i;
	char	*stringdest;
	char	*stringsrc;

	i = 0;
	string_dest = (void *)dest;
	string_src = (void *)src;
	while (i < n)
	{
		string_dest[i] = string_src[i];
		i++;
	}
	string_dest[i] = 0;
	return (string_dest);
}

/*
void    main()
{
        char *src;
        char dest[10];

        src = "hello";
        ft_memcpy(dest, src, 3);
        printf("%s\n", dest);
}
*/

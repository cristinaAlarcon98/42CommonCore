/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:15:21 by cralarco          #+#    #+#             */
/*   Updated: 2024/11/28 18:56:34 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*string;
	int		i;

	string = (void *)s;
	i = 0;
	while (i <= n)
	{
		string[i] = c;
		i++;
	}
	return (s);
}
/*
int	main()
{
	char s[10];

	ft_memset((void*)s, 'A', 4);
}
*/

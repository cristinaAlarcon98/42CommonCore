/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:54:28 by cralarco          #+#    #+#             */
/*   Updated: 2024/11/27 17:57:56 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_striteri(char *s, char (*f)(unsigned int, char*))
{
	int	i;
	char *result;

	if (!s || !f)
        return ;
	
	i = 0;
	while(s[i])	
	{
		f(i, &s[i]);
		i++;
	}
}



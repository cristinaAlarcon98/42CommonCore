/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:40:57 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/18 17:15:13 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_space(char str)
{
	if (str == '\t' || str == '\n' || str == '\t' || str == '\v'
		|| str == '\f' || str == '\r' || str == ' ')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	negative;
	int	number;

	negative = 0;
	number = 0;
	while (is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = 1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number *= 10;
		number += *str - 48;
		str++;
	}
	if (negative)
		number *= -1;
	return (number);
}
/*
int main()
{

     printf("%d\n", ft_atoi(" ---+--+1234ab567"));  // Should print -1234
    printf("%d\n", ft_atoi("   -+42"));            // Should print 42
    printf("%d\n", ft_atoi("  +---+42ab567"));      // Should print 42
    printf("%d\n", ft_atoi("42abc"));               // Should print 42
    printf("%d\n", ft_atoi("+-42"));                // Should print 0
    printf("%d\n", ft_atoi("  -+--12345"));         // Should print -12345
    return 0;
}
*/

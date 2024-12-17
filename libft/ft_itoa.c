/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:50:30 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/17 16:34:02 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

static	int	num_len(int num)
{
	int	pos;

	pos = 0;
	if (num < 0)
	{
		if (num == INT_MIN)
		{
			num = num / 10;
			pos++;
		}
		num = num * -1;
		pos++;
	}
	while (num > 9)
	{
		num = num / 10;
		pos++;
	}
	pos++;
	return (pos);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = num_len(n);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (n < 0)
	{
		if (n == INT_MIN)
			return ("-2147483648");
		n *= -1;
		result[0] = '-';
	}
	while (n > 9)
	{
		result[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	result[len - 1] = n + '0';
	return (result);
}

/*
int	main()
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-2147483646));
	printf("%s\n", ft_itoa(-3));
	printf("%s\n", ft_itoa(-33));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(1));
	printf("%s\n", ft_itoa(INT_MAX));
	printf("%s\n", ft_itoa(44));
	printf("%s\n", ft_itoa(5000));

}
*/

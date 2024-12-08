/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:40:57 by cralarco          #+#    #+#             */
/*   Updated: 2024/11/28 20:04:16 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int counter;
	int	number;

	counter = 0;
    number = 0;
    while(*str =='\t' || *str =='\n'  || *str =='\t'|| *str =='\v'|| *str =='\f'|| *str =='\r' || *str ==' ')
    {
        str++;
    }
    while(*str == '-' || *str == '+')
    {
        if(*str == '-')
            counter++;
        str++;
    }
    while(*str >= 48 && *str <= 57)
    {
        number *= 10;
        number += *str - 48;
        str++;
    }
    if(counter%2 != 0)
        number *= -1;
    return number;

}
/*
int main()
{

    const char *str = "   +-+-+-234gf5";

    printf("%d\n", ft_atoi(str));
}
*/


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
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int     main(int c)
{
        printf("ft_isalnum('1') %d\n", ft_isalnum('1'));
        printf("ft_isalnum('d') %d\n", ft_isalnum('d'));
        printf("ft_isalnum('#') %d\n", ft_isalnum('#'));

}
*/

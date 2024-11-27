/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:50:30 by cralarco          #+#    #+#             */
/*   Updated: 2024/11/26 16:34:52 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static	int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

static	int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

/*int main() {
    printf("ft_isalpha('a') %d\n", ft_isalpha('a'));
    printf("ft_isalpha('b') %d\n", ft_isalpha('b'));
    printf("ft_isalpha('Z') %d\n", ft_isalpha('Z'));
    printf("ft_isalpha('#') %d\n", ft_isalpha('#'));
    return 0;
}
*/

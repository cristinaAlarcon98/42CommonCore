/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:13:08 by cralarco          #+#    #+#             */
/*   Updated: 2024/11/26 17:38:00 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int d)
{
	return (d >= '0' && d <= '9');
}

/*int main()
  {
  printf("ft_isdigit('10') %d\n", ft_isdigit('1'));
  printf("ft_isdigit('d') %d\n", ft_isdigit('d'));
  printf("ft_isdigit('5') %d\n", ft_isdigit('5'));	
  }*/

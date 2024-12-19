/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london  >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:52:40 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/19 15:27:26 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_rest_of_str(const char *big, const char *little)
{
	while (*little != '\0')
	{
		if (*little != *big)
			return (0);
		big++;
		little++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (len >= little_len && *big)
	{
		if (*big == *little)
		{
			if (check_rest_of_str(big, little))
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}

/*
int main(){
	
	char big[30] = "aaabcabdc";
	char little[10] = "aabc";
	char * empty = "";


	
		printf("%s\n",  ft_strnstr(big, "cd", 8) );


//    printf("%s\n",  strnstr(h2,n2,3));
} */

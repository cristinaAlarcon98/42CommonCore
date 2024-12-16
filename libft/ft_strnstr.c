/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42londonfr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:52:40 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/09 12:31:54 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	length;

	length = 0;
	while (s[length] != 0)
	{
		length++;
	}
	return (length);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*pointer;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (len > 0)
	{
		pointer = (char *)needle;
		while (*pointer)
		{
			if (*haystack == *pointer)
				return ((char *)haystack);
			pointer++;
		}
		haystack++;
		len--;
	}
	return (0);
}

/*
int main(){
    const char *h1 = "hello";
    const char *n1 = "rrrr";

    const char *h2 = "hello";
    const char *n2 = "ert";

	
		printf("%s\n",  ft_strnstr(h1,n1,4));

	

//    printf("%s\n",  strnstr(h2,n2,3));
}
*/

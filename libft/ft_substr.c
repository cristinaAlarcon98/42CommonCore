/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42londonfr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:07:38 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/19 13:12:37 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	size_len;

	if (!s)
		return (NULL);
	size_len = ft_strlen(s);
	if (start >= size_len)
		return (ft_strdup(""));
	if (start + len > size_len)
		len = size_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
int main()
{
    char const *s = "hola soy cristina";
    printf("%s\n", ft_substr(s, 20, 10));
   // printf("%c\n", s[16]);



}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:40:57 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/19 13:15:36 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;
	size_t	total_size;

	if (size && nmemb >= SIZE_MAX / size)
		return (NULL);
	total_size = nmemb * size;
	pointer = malloc(total_size);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, total_size);
	return (pointer);
}
/*
int main()
{
    size_t count = 5;
    size_t size = 3;

    void *allocated_memory = ft_calloc(count, size);

    if (allocated_memory == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // To see the result, we'll print the allocated memory byte by byte
    unsigned char *memory = (unsigned char *)allocated_memory;
    for (size_t i = 0; i < count * size; i++)
    {
        printf("%d ", memory[i]);  // Print each byte of the allocated memory
    }
    printf("\n");

    free(allocated_memory);  // Don't forget to free the allocated memory

    return 0;
    
}
*/

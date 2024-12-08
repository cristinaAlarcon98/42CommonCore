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

#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*string;
	int		i;

	string = (void *)s;
	i = 0;
	while (i < n)
	{
		string[i] = 0;
		i++;
	}
}
void *ft_calloc(size_t count, size_t size)
{
    void *pointer;
    int total_size;

    total_size = count * size;
    pointer = malloc(total_size);
    if(pointer == NULL)
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
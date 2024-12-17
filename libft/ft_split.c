/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:50:30 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/17 17:29:17 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <unistd.h>

int	count_words(char const *str, char del)
{
	size_t	word_count;

	word_count = 0;
	while (*str)
	{
		if (*str != del)
		{
			word_count += 1;
			while (*str != del && *str != '\0')
				str++;
		}
		if (*str)
			str++;
	}
	return (word_count);
}

static	void	copy_text(char const *str, int start, int end, char **result)
{
	int	i;

	i = 0;
	while (result[i])
		i++;
	result[i] = malloc(sizeof(char) * (end - start + 1));
	if (result[i] == NULL)
		return ;
	ft_strlcpy(result[i], &str[start], end - start + 1);
}

static	void	process_word(char **result, char const *s, char c)
{
	size_t	start;
	int		word_flag;
	int		index;

	start = 0;
	index = 0;
	word_flag = 0;
	while (s[index])
	{
		if (s[index] == c && s[index + 1] != '\0' && word_flag == 1)
		{
			copy_text(s, start, index, result);
			word_flag = 0;
		}
		else if (s[index] != c && word_flag == 0)
		{
			word_flag = 1;
			start = index;
		}
		index++;
	}
	if (s[index] == '\0')
		copy_text(s, start, index, result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words_number;

	if (!s)
		return (NULL);
	words_number = count_words(s, c);
	result = ft_calloc((words_number + 1), sizeof(char *));
	process_word(result, s, c);
	return (result);
}
/*
int main()
{
    char const *s = " cristina  banana  cafe ";
    char **result;
    int i = 0;

    result = ft_split(s, ' ');
    printf("Number of words: %u\n", count_words(s, ' '));
    while(result[i])
    {
        printf("%s\n", result[i]);
        i++;
        //free(result[i]);

    }    
    free(result);
}
*/

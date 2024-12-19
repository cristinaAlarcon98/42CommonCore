/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:50:30 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/19 14:32:29 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void	copy_text(char *start, char *end, char **result, int *current_word)
{
	if (result[*current_word] == NULL)
	{
		result[*current_word] = malloc(sizeof(char) * (end - start + 1));
		if (result[*current_word] == NULL)
			return ;
	}
	ft_strlcpy(result[*current_word], start, end - start + 1);
	(*current_word)++;
}

static void	process_word(char **result, char const *s, char c)
{
	size_t	start;
	int		flag;
	int		i;
	int		current_w;

	start = 0;
	i = 0;
	flag = 0;
	current_w = 0;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != '\0' || s[i + 1] != c) && flag == 1)
		{
			copy_text((char *)(s + start), (char *)(s + i), result, &current_w);
			flag = 0;
		}
		else if (s[i] != c && flag == 0)
		{
			flag = 1;
			start = i;
		}
		i++;
	}
	if (s[i] == '\0' && flag == 1)
		copy_text((char *)(s + start), (char *)(s + i), result, &current_w);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!result)
		return (NULL);
	process_word(result, s, c);
	result[count_words(s, c)] = NULL;
	return (result);
}
/*
int main()
{
    char const *s = "cristina8";
    char **result;
    int i = 0;

    result = ft_split(s, '8');
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:50:30 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/12 20:10:53 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <unistd.h>

int	count_words(char const *str, char delimiter)
{
    int counter;
    int i;
    int word_flag; 

    counter = 0;
    i = 0;
    word_flag = 0;
    while (*str)
    {
        if((*str == delimiter || *str == '\0')  && word_flag == 1)
        {
            counter++;
            word_flag = 0;
        }
        else if(str[i] != delimiter && word_flag == 0)
            word_flag = 1;
        str++;
	  }
    if (word_flag)
        counter++;
    return counter;
}

static  void copy_text_in_result(char const *str, int start, int end,char **result)
{
    int i;

    i = 0;
    while(result[i])
        i++;
    result[i] = malloc(sizeof(char) * (end - start + 2));
    ft_strlcpy(result[i], &str[start], end - start + 1);
}


char **ft_split(char const *s, char c)
{
    char **result;
    size_t start;
    int words_number;
    int word_flag;
    int index;
    

    start = 0;
    if(!s)
        return (NULL);
    words_number = count_words(s, c);
    result = ft_calloc( (words_number + 1), sizeof(char *));

    index = 0;
    word_flag = 0;
    while(s[index])
    {
        if(s[index] == c && word_flag == 1)
        {
            copy_text_in_result(s, start, index, result);
            word_flag = 0;
        }
        else if(s[index] != c && word_flag==0)
        {
            word_flag = 1;
            start = index;
        }
        index++;
		
    }
    if(s[index] == '\0')
	    copy_text_in_result(s, start, index, result);
    return result;

}

int main()
{
    char const *s = " cristina  banana     cafe";
    char **result;
    int i = 0;

    result = ft_split(s, ' ');
    while(result[i])
    {
        printf("%s\n", result[i]);
        i++;
        //free(result[i]);

    }    
    free(result);
    /*
    printf("%s\n", result[0]);
    printf("%s\n", result[1]);
    printf("%s\n", result[2]);
    */



}


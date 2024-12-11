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
#include <stdlib.h>
#include "libft.h"


int     countword(char *str, char delimiter)
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
        {
            word_flag = 1;
        }
        str++;
    }
    
    if (word_flag)
    {
        counter++;
    }

    return counter;
}

static  void copy_text_in_result(char *str, int start, int end,char **result)
{
    int i;
    while(!result[i])
        i++;
    result[i] = malloc(sizeof(char) * (end - start + 2));
    ft_strlcpy(result[i], &str[start], start - end + 1);
}


char **ft_split(char const *s, char c)
{
    char **result;
    size_t start;
    size_t end;
    int count;
    int flag;
    int i;
    
    start = 0;
    end = 0;
    if(!s)
        return (NULL);
    count = countword(*s, c);
    result = calloc( (count + 1), sizeof(char *));

    i = 0;
    while(!s[i])
    {
        if((s[i] == c || s[i]=='\0') && flag == 1)
        {
            copytext(s, start, i, result);
            flag = 0;
        }
        else if(s[i] != c && flag==0)
        {
            flag = 1;
            start = i;
        }
        i++;        
    }
    return result;


    // while(s[len1] && s[len1] != c)
    // {
    //     len1++;
    // }
    // s1 = malloc(len1 + 1);
    // if(!s1)
    //     return(NULL);
    // s1 = ft_substr(s,0,len1);
    // len2 = len1 + 1;
    // /*while(s[len2] && s[len2] != c)
    // {
    //     len2++;
    // }*/
    // s2 = malloc(ft_strlen(s1) - len1);
    // if(!s2)
    //     return(NULL);
    // s2 = ft_substr(s,0,len2);

}

int main()
{
    char const *s = "    cristina  banana     cafe   ";
    char **result;
    int i = 0;

    result = ft_split(s, 't');
    while(!result && !result[i])
    {
        printf("%s\n", result[i]);
        i++;

    }    
    /*
    printf("%s\n", result[0]);
    printf("%s\n", result[1]);
    printf("%s\n", result[2]);
    */




}
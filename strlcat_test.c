/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cralarco <cralarco@student.42london.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:59:42 by cralarco          #+#    #+#             */
/*   Updated: 2024/12/02 19:53:38 by cralarco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strlcpy_test.c
#include <bsd/string.h>
#include <stdio.h>

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define RESET "\033[0m"

// Declaration of the test_strlcpy function (which is in main.c)
size_t ft_strlcat(char *dst, const char *src, size_t size);

void run_strlcat_tests() {

    size_t my_strlcat;
    size_t original_strlcat;
    size_t size;

    // Test case 1
    char src1[5] = "SRC";
    char dst1[4] = "DS";
    char srcTest1[5] = "SRC";
    char dstTest1[4] = "DS";

    // Test case 2
    char src2[5] = "TINA";
    char dst2[5] = "CRIS";
    char srcTest2[5] = "TINA";
    char dstTest2[5] = "CRIS";

    // Test case 3
    char src3[4] = "CRIS";
    char dst3[1] = "";
    char srcTest3[4] = "CRIS";
    char dstTest3[1] = "";

    // // Test case 4:w
    // char src4[3] = "A";
    // char dst4[3] = "B";
    // char srcTest4[3] = "A";
    // char dstTest4[3] = "B";

    


    // my_strlcat = ft_strlcat(dst1, src1, 4);
    // original_strlcat = strlcat(dstTest1, srcTest1, 4);
    // printf("System dest pointer: %s\n", dstTest1);
    // printf("My dest pointer: %s\n", dst1);
        
    //Test case 1
    size = 4;
    printf("Size = %zu\n", size);

    my_strlcat = ft_strlcat(dst1, src1, size);
    original_strlcat = strlcat(dstTest1, srcTest1, size);
    if (my_strlcat == original_strlcat)
    {
        printf(GREEN "CORRECT return value %zu\n" RESET, my_strlcat);
    }
    else
    {
        printf(RED "INCORRECT return value  %zu\n" RESET, my_strlcat);
        printf("The correct return value is: %zu\n", original_strlcat);
    }
        printf("My dest pointer: %s\n", dst1);
        printf("System dest pointer: %s\n", dstTest1);
        printf("------------------------------------------\n");


    
     //Test case 3
    size = 1;
    printf("Size = %zu\n", size);

    my_strlcat = ft_strlcat(dst3, src3, size);
    original_strlcat = strlcat(dstTest3, srcTest3, size);
    if (my_strlcat == original_strlcat)
    {
        printf(GREEN "CORRECT return value %zu\n" RESET, my_strlcat);
    }
    else
    {
        printf(RED "INCORRECT return value  %zu\n" RESET, my_strlcat);
        printf("The correct return value is: %zu\n", original_strlcat);
    }
        printf("My dest pointer: %s\n", dst3);
        printf("System dest pointer: %s\n", dstTest3);
        printf("------------------------------------------\n");
    
    
    }



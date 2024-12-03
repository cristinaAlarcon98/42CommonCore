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
size_t ft_strlcpy(char *dst,const char *src, size_t size);

void run_strlcat_tests() {
    // Test case 1
    char src1[5] = "SRC";
    char dst1[4] = "DS";
    char srcTest1[5] = "SRC";
    char dstTest1[4] = "DS";

    // Test case 2
    char src2[6] = "HELLO";
    char dst2[6] = "DST";
    char srcTest2[6] = "HELLO";
    char dstTest2[6] = "DST";

    // Test case 3
    char src3[8] = "WORLD";
    char dst3[6] = "DST";
    char srcTest3[8] = "WORLD";
    char dstTest3[6] = "DST";

    // Test case 4
    char src4[3] = "A";
    char dst4[3] = "B";
    char srcTest4[3] = "A";
    char dstTest4[3] = "B";

    // Test sizes
    size_t sizes[] = {4, 5, 10};
    for (int i = 0; i < 3; i++) {
        size_t size = sizes[i];

        // Test case 1
        size_t my_strlcpy = ft_strlcpy(dst1, src1, size);
        size_t original_strlcpy = strlcpy(dstTest1, srcTest1, size);
        if (my_strlcpy == original_strlcpy) {
            printf(GREEN "CORRECT return value (size %zu)\n" RESET, size);
        } else {
            printf(RED "INCORRECT return value (size %zu)\n" RESET, size);
        }
        printf("My dest pointer: %s\n", dst1);
        printf("System dest pointer: %s\n", dstTest1);

        // Test case 2
        my_strlcpy = ft_strlcpy(dst2, src2, size);
        original_strlcpy = strlcpy(dstTest2, srcTest2, size);
        if (my_strlcpy == original_strlcpy) {
            printf(GREEN "CORRECT return value (size %zu)\n" RESET, size);
        } else {
            printf(RED "INCORRECT return value (size %zu)\n" RESET, size);
        }
        printf("My dest pointer: %s\n", dst2);
        printf("System dest pointer: %s\n", dstTest2);

        // Test case 3
        my_strlcpy = ft_strlcpy(dst3, src3, size);
        original_strlcpy = strlcpy(dstTest3, srcTest3, size);
        if (my_strlcpy == original_strlcpy) {
            printf(GREEN "CORRECT return value (size %zu)\n" RESET, size);
        } else {
            printf(RED "INCORRECT return value (size %zu)\n" RESET, size);
        }
        printf("My dest pointer %s\n", dst3);
        printf("System dest pointer %s\n", dstTest3);

        // Test case 4
        my_strlcpy = ft_strlcpy(dst4, src4, size);
        original_strlcpy = strlcpy(dstTest4, srcTest4, size);
        if (my_strlcpy == original_strlcpy) {
            printf(GREEN "CORRECT return value (size %zu)\n" RESET, size);
        } else {
            printf(RED "INCORRECT return value (size %zu)\n" RESET, size);
        }
        printf("My dest pointer: %s\n", dst4);
        printf("System dest pointer: %s\n", dstTest4);
    }
}


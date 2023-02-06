/**
 * @file class012-while.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-06-24
 *
 * Chapter 02: Basic Syntax
 * Class 013 - Iterating with for
 */

#include <cstdio>

int main()
{
    int array[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i)
    {
        printf("element %d is %d\n", i, array[i]);
    }

    int strings[] = "string";

    for (char *p = strings; *p; ++p)
    {
        printf("char is %c\n", *p);
    }

    return 0;
}

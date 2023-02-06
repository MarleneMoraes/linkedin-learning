/**
 * @file class014-range.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-06-24
 *
 * Chapter 02: Basic Syntax
 * Class 014 - Range-based for loop
 */

#include <cstdio>

int main()
{
    int array[] = {1, 2, 3, 4, 5};

    // only C++11 and later
    for (int i : array)
    { // each value in the container
        printf("i is %d\n", i);
    }

    char string[] = "string";

    for (int c : string)
    {
        if (c == 0)
            break;
        printf("c is %c\n", c);
    }

    return 0;
}

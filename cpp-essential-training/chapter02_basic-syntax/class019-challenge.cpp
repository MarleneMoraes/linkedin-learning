/**
 * @file class019-challenge.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-07-12
 *
 * Chapter 02: Basic Syntax
 * Class 019 - Challenge: Count elements
 */

#include <cstdio>

const char string[] = "This is a null-terminated string.";

int main()
{
    int count = 0;

    for (int x : string)
    {
        if (x == 0)
            break;
        ++count;
    }

    printf("The number of characters is: %d\n", count);
    return 0;
}

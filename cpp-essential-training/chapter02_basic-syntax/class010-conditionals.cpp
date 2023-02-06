/**
 * @file class010-conditionals.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-06-24
 *
 * Chapter 02: Basic Syntax
 * Class 010 - Conditionals
 */

#include <cstdio>

int main()
{
    int x = 42;
    int y = 7;

    // logical values: 0 = false ; non-zero = true
    printf("value is %d\n", x < y); // 0
    printf("value is %d\n", x > y); // 1

    if (x > y)
    {
        // if (42) {
        puts("condition is true");
    }
    else
    {
        puts("condition is false");
    }
    return 0;
}

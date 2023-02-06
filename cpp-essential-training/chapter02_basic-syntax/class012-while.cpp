/**
 * @file class012-while.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-06-24
 *
 * Chapter 02: Basic Syntax
 * Class 012 - Looping with while and do
 */

#include <cstdio>

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int i = 0;

    while (i < 5)
    { // the loop condition
        printf("element %d is %d\n", i, array[i]);
        ++i;
    }

    while (i < 5)
    {
        if (i == 3)
            break; // this line break the loop condition
        printf("element %d is %d\n", i, array[i]);
        ++i;
    }

    while (i < 5)
    {
        if (i == 2)
            continue; // this line skip the element, but don't break the loop
        printf("element %d is %d\n", i, array[i]);
        ++i;
    }

    do
    {
        printf("element %d is %d\n", i, array[i]);
        ++i;
    } while (i < 5);

    return 0;
}

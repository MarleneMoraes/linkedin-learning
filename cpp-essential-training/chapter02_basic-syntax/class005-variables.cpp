/**
 * @file class005-variables.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-06-24
 *
 * Chapter 02: Basic Syntax
 * Class 005 - Defining variables
 */

#include <cstdio>

int main()
{

    int i; // it allocates space of a size sufficient to hold a value of that type
    i = 7; // initializing a value 7

    int x = 7; // defining and initializing the variable

    const int j = 7; // immutable variable

    printf("x is %d\n", i);
    return 0;
}

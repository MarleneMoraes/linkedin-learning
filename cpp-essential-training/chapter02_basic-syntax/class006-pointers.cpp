/**
 * @file class006-pointers.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-06-24
 *
 * Chapter 02: Basic Syntax
 * Class 006 - Pointers
 */

#include <cstdio>

int main()
{
    int x; // memory allocated for a value type integer
    x = 1; // the value 1 is copied into the memory location x

    int y = x; // the value x is copied into the variable y

    int *ip; // pointer
    ip = &x; // the address of x
    y = *ip; // copy the value by ip

    int x = 7;
    int y = 42;
    int *ip = &x;

    printf("The value of x is %d\n", x);     // 7
    printf("The value of y is %d\n", y);     // 42
    printf("The value of *ip is %d\n", *ip); // 7

    x = 73;
    printf("The value of *ip is %d\n", *ip); // 73

    ip = &y;
    printf("The value of *ip is %d\n", *ip); // 42

    return 0;
}

/**
 * @file class007-references.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-06-24
 *
 * Chapter 02: Basic Syntax
 * Class 007 - References
 */

#include <cstdio>

int main()
{
    int x = 7;
    int *ip = &x;
    const int &y = x; // recommended
    // int & y = x; // reference y assigned to x

    printf("The value of x is %d\n", x);     // 7
    printf("The value of y is %d\n", y);     // 7
    printf("The value of *ip is %d\n", *ip); // 7

    // y = 73; // references changed x
    x = 73;
    printf("The value of x is %d\n", x);     // 73
    printf("The value of y is %d\n", y);     // 73
    printf("The value of *ip is %d\n", *ip); // 73

    int z = 7;
    ip = &z;

    printf("The value of x is %d\n", x);     // 73
    printf("The value of y is %d\n", y);     // 73
    printf("The value of *ip is %d\n", *ip); // 7

    *ip = 103; // change the value in address
    // y = 142; // change x and y

    printf("The value of x is %d\n", x); // 73
    printf("The value of y is %d\n", y); // 73
    printf("The value of z is %d\n", z); // 103

    return 0;
}

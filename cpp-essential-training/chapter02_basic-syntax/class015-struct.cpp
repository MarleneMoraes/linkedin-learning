/**
 * @file class015-struct.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-06-24
 *
 * Chapter 02: Basic Syntax
 * Class 015 - Structures
 */

#include <cstdio>

struct S
{
    int i;
    double d;
    const char *s;
};

int main()
{
    S s1 = {3, 47.9, "string one"}; // initialized the struct

    /*
        S s1;
        s1.i = 3;
        s1.d = 47.9;
        s1.s = "string one";
    */

    printf("s1: %d, %f, %s\n", s1.i, s1.d, s1.s); // s1: 3, 47.900000, string one

    s1.d = 73;
    printf("s1: %d, %f, %s\n", s1.i, s1.d, s1.s); // s1: 3, 73.000000, string one

    return 0;
}
/**
 * @file class011-switch.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-06-24
 *
 * Chapter 02: Basic Syntax
 * Class 011 - The branching conditional
 */

#include <cstdio>

int main()
{
    const int iONE = 1;
    const int iTWO = 2;
    const int iTHREE = 3;
    const int iFOUR = 4;

    int x = 3;

    switch (x)
    {
        case iONE:
            puts("one");
            break;
        case iTWO:
            puts("two");
            break;
        case iTHREE:
            puts("three"); // this line is executed
            break;
        case iFOUR:
            puts("four");
            break;
        default:
            puts("default");
            break;
    }
    return 0;
}

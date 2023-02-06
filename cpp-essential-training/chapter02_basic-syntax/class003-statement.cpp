/**
 * @file class003-statement.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-07-06
 *
 * Chapter 02: Basic Syntax
 * Class 003 - Statements and expressions
 */

#include <cstdio>

int main()
{

    /*
        A statement is analogous to a line of code.
        It may do many things but it's treated as
        a unit of execution. A statement is always
        terminated with a semi-colon.[...] All here
        is statement
    */

    int x;
    x = 42;

    printf("x is %d\n", x);      // 42
    printf("x is %d\n", x = 73); // 73

    x = 42 * 12 + 14;
    printf("x is %d\n", x); // 518

    x = 42 * (12 + 14);
    printf("x is %d\n", x); // 1092

    return 0;
}

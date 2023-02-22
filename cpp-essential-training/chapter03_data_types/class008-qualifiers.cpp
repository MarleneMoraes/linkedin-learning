/**
 * @file class008-qualifiers.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-06-24
 *
 * Chapter 03: Data Types
 * Class 008 - Qualifiers
 */

#include <cstdio>

/*
    CV Qualifiers       Storage Duration
    const               static
    mutable             register
    volatile            extern
*/

class S
{
public:
    int static_value()
    {
        static int x = 7;
        return ++x;
    }
};

int func()
{
    int x = 7;
    return ++x;
}

int func_static()
{
    static int x = 7;
    return ++x;
}

int main()
{
    int i = 42;
    printf("The integer is %d\n", i);

    i = 73;
    printf("The integer is %d\n", i);

    // Constant
    const int integer = 102;
    printf("The integer is %d\n", integer);

    integer = 73; // it's not run
    printf("The integer is %d\n", integer);

    // Static
    i = func();
    i = func();
    i = func();
    printf("The integer is %d\n", i); // The integer is 8

    i = func_static();
    i = func_static();
    i = func_static();
    printf("The integer is %d\n", i); // The integer is 10

    // Static in different objects
    S s1;
    S s2;
    S s3;

    printf("The integer is %d\n", s1.static_value()); // The integer is 8
    printf("The integer is %d\n", s2.static_value()); // The integer is 9
    printf("The integer is %d\n", s3.static_value()); // The integer is 10

    return 0;
}

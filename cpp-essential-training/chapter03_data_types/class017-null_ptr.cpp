/**
 * @file class017-null_ptr.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-06-24
 *
 * Chapter 03: Data Types
 * Class 017 - Unambigous Null Pointer Constant
 */

#include <cstdio>

#ifndef NULL
#define NULL (0LL) // long long 0: common C++ definition
//#define NULL ((void*)0)
//#define NULL (0)
#endif

void f(int i)
{
    printf("the int is %d\n", i);
}

void f(const char *s)
{
    printf("the pointer is %p\n", s);
}

int main()
{
    // f(NULL); // cause is error because it's ambigous 
    f(nullptr); // only C++ 11+: unambigous
    return 0;
}

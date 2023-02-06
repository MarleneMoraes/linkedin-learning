/**
 * @file class016-functions.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-06-24
 *
 * Chapter 02: Basic Syntax
 * Class 016 - Functions
 */

#include <cstdio>

void function()
{
    puts("this is func()");
}

void functionWithParameters(int i)
{
    printf("this is func(%i)\n", i);
}

void functionWithParameters(int i, const char *s)
{
    printf("this is func(%i, %s)\n", i, s);
}

int functionWithReturn(int i, const char *s)
{
    printf("this is func(%i, %s)\n", i, s);
    return i * 2;
}

int main()
{
    puts("this is main()");

    function();
    functionWithParameters(47);
    functionWithParameters(47, "string");
    int x = functionWithReturn(47, "string");

    return 0;
}
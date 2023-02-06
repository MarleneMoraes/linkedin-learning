/**
 * @file class002-anatomy.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-06-24
 *
 * Chapter 02: Basic Syntax
 * Class 002 - Anatomy of a C++ Program
 */

#include <cstdio> // Including the C standard IO header

int main() // It's a notable exception when a space is necessary to distinguish between two words or tokens
{
    // this is a comment

    /* this is a multi-line comment
     which may span more than one
     line.
    */
    puts("Hello, World!");

    const char *str = "Hello World";
    puts(str);

    return 0; // the program exited normally
}

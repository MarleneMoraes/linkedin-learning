/**
 * @file class007-character_escape_sequences.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-06-24
 *
 * Chapter 03: Data Types
 * Class 007 - Character Escape Sequences
 */

#include <cstdio>

int main()
{
    puts("Hello, World! \' \" \\ \x40 "); // Hello, World! ' " \ @ 
    // x40 is a ASCII code

    puts("Hello, \n \t World!");
    // \n new line
    // \t tab
    return 0;
}
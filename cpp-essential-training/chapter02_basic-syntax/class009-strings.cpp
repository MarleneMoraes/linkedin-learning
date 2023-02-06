/**
 * @file class009-strings.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-06-24
 *
 * Chapter 02: Basic Syntax
 * Class 009 - Primitive strings
 */

#include <cstdio>

int main()
{
    char s[] = "String"; // char s[] = { 'S', 't', 'r', 'i', 'n', 'g', 0 };
    printf("s is %s\n", s);

    // which character
    // for(int i = 0; s[i] != 0; ++i){
    for (char *cp = s; *cp != 0; ++cp)
    {
        printf("char is %c\n", *cp); // s[i]);
    }

    return 0;
}

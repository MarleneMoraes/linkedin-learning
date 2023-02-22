/**
 * @file class006-characters_strings.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-07-05
 *
 * Chapter 03: Data Types
 * Class 006 - Characters and strings
 */

#include <cstdio>

int main()
{
    char cstring[] = "String"; // string is array of characters

    puts(cstring);

    for (int i = 0; cstring[i]; i++)
    {
        printf("%d: %c\n", i, cstring[i]); // each character
    }

    // String in pointer
    const char *cstring2 = "String"; // it doesn't need because the string is naturally immutable
    puts(cstring2);

    for (int i = 0; cstring2[i]; i++)
    {
        printf("%d: %c\n", i, cstring2[i]);
    }

    // String concatenation
    cstring2 =
        "String"
        " another string"; // cstring2 = "String" " another string";

    puts(cstring2); // String another string

    for (int i = 0; cstring2[i]; i++)
    {
        printf("%d: %c\n", i, cstring2[i]);
    }

    return 0;
}
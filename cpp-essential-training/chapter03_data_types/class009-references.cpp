/**
 * @file class009-references.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-06-24
 *
 * Chapter 03: Data Types
 * Class 009 - References
 */

#include <cstdio>

int &f(int &i)
{
    return ++i;
}

int main()
{
    int i = 5;
    int &ir = i;
    ir = 10;

    printf("i is %d\n", i);

    /*
        A reference cannot be null, it cannot
        be uninitialized and it cannot be
        changed to refer to another variable.
    */

    printf("f(i) is %d\n", f(i)); // 6

    f(i);
    printf("i is %d\n", i); // 6

    f(i) = 42;
    printf("i is %d\n", i); // i is 42

    // recommended to use pointers
    return 0;
}
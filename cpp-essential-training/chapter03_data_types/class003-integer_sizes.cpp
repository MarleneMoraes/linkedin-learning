/**
 * @file class003-integer_sizes.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-06-24
 *
 * Chapter 03: Data Types
 * Class 003 - Integer Sizes
 */

#include <cstdio>

int main()
{
    char c = 0;
    short int si = 0;
    int i = 0;
    long int li = 0;
    long long int lli = 0;

    printf("sizeof char is %zd bits\n", sizeof(c) * 8);
    printf("sizeof short int is %zd bits\n", sizeof(si) * 8);
    printf("sizeof int is %zd bits\n", sizeof(i) * 8);
    printf("sizeof long int is %zd bits\n", sizeof(li) * 8); // on Mac runs 64 bits. Windows, 32 bits
    printf("sizeof long long int is %zd bits\n", sizeof(lli) * 8);
    return 0;
}

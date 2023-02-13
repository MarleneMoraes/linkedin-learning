/**
 * @file class001-overview.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-07-12
 *
 * Chapter 03: Data Types
 * Class 001 - Overview of data types
 */

#include <cstdio>

int main()
{
    // Primitive typers
    int number;
    float numberf;
    bool boolean;

    // Compound types
    int x[5] = {1, 2, 3, 4, 5};
    char s[] = "this is a string";

    // Various types
    struct x
    {
        int a;
        float b;
        char c[25];
    };

    class x
    {
        int a;
        float b;
        char c[25];

    public:
        int get_value() const;
        void set_value(int x);
    };

    union x
    {
        int a;
        float b;
        char c[25];
    };

    // Pointer
    int x = 42;
    int *px = &x;
    printf("x is %d\n", *px);

    // Reference
    int &rx = x;
    printf("x is %d\n", rx);

    return 0;
}

/**
 * @file class005-floating_point_types.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-08-05
 *
 * Chapter 03: Data Types
 * Class 005 - Floating-point Types
 */

#include <cstdio>

// a byte is 8 bits
const size_t byte = 8;

int main()
{
    float f;
    double df;
    long double ldf;

    printf("size of float f is %zd bits\n", sizeof(f) * byte);
    printf("size of double df is %zd bits\n", sizeof(df) * byte);
    printf("size of long double ldf is %zd bits\n", sizeof(ldf) * byte); // on Mac runs 128 bits. Windows, 96 bits

    f = 500.0; // the .0 is put automatic and it's not necessary put it
    f = 5e2;   // same value

    printf("f is %f\n", f);

    // Precision
    f = .1 + .1 + .1;
    printf("f is %f\n", f);

    if (f == 0.3)
    {
        puts("true");
    }
    else
    {
        puts("false");
    }
    // returns false, because:
    printf("f is %1.10f\n", f); // f is 0.3000000119
    printf("f is %1.20lf\n", f); // f is 0.30000001192092896000

    return 0;
}

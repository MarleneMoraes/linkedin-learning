/**
 * @file class008-array.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-07-07
 *
 * Chapter 02: Basic Syntax
 * Class 008 - Primitive Arrays
 */

#include <cstdio>

int main()
{
    int int_array[5]; // defined the space, but the values are undefined

    int_array[0] = 1; // *ia = 1;

    int *ip = int_array;
    *ip = 2; // pointer in beggining

    ++ip;
    *ip = 3; // pointer defined the next array index
    *(++ip) = 4;

    // initializer and assigns values
    int int_array_i[] = {1, 2, 3, 4, 5};
    // int int_array_i[5] = {1, 2, 3, 4, 5};

    int array[] = {1, 2, 3, 4, 5};
    int x = array[2]; // the third element in array
    printf("x is %d\n", x);

    for (int i : array)
    {
        printf("%d ", i);
    }
    puts("");

    // update the value
    array[2] = 47;
    printf(array[2]);

    return 0;
}

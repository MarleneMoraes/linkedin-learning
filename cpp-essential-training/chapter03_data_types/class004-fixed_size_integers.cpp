/**
 * @file class004-fixed_size_integers.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-06-24
 *
 * Chapter 03: Data Types
 * Class 004 - Fixed-size Integers
 */

#include <cstdio>
#include <cstdint> // c standart int

int main()
{
    // there's not difference between OSs
    printf("sizeof int8_t is %ld bits\n", sizeof(int8_t) * 8);
    printf("sizeof int16_t is %ld bits\n", sizeof(int16_t) * 8);
    printf("sizeof int32_t is %ld bits\n", sizeof(int32_t) * 8);
    printf("sizeof int64_t is %ld bits\n", sizeof(int64_t) * 8);

    printf("sizeof uint8_t is %ld bits\n", sizeof(uint8_t) * 8);
    printf("sizeof uint16_t is %ld bits\n", sizeof(uint16_t) * 8);
    printf("sizeof uint32_t is %ld bits\n", sizeof(uint32_t) * 8);
    printf("sizeof uint64_t is %ld bits\n", sizeof(uint64_t) * 8);

    return 0;
}

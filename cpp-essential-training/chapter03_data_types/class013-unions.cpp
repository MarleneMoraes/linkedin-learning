/**
 * @file class013-unions.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-06-24
 *
 * Chapter 03: Data Types
 * Class 013 - Unions
 */

#include <cstdio>
#include <cstdint>

// union: same memory space for different types
union ipv4
{
    uint32_t i32;
    struct
    {
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
    } octets;
};

int main()
{
    union ipv4 addr;
    addr.octets = {192, 168, 73, 42};
    printf("addr is %d.%d.%d.%d is %08x\n",
           addr.octets.a, addr.octets.b, addr.octets.c, addr.octets.d, addr.i32);
    return 0;
}

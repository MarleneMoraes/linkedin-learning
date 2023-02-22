/**
 * @file class015-void_type.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-06-24
 *
 * Chapter 03: Data Types
 * Class 015 - The void Type
 */

#include <cstdio>

void func() // void func(void)
{
    puts("this is void func ( void )");
    // return;
}

int main()
{
    puts("calling func()");
    func();
    return 0;
}

/**
 * @file class017-class.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-06-24
 *
 * Chapter 02: Basic Syntax
 * Class 017 - Class
 */

#include <cstdio>

class C
{
    int i = 0; // this is private

public:
    void setvalue(int value) { i = value; }
    int getvalue() { return i; }
};

int main()
{
    int i = 47;
    C o1;
    C o2;
    C o3;

    o1.setvalue(i);
    o2.setvalue(i * 2);
    o3.setvalue(i * 3);

    printf("value is %d\n", o1.getvalue()); // value is 47
    printf("value is %d\n", o2.getvalue()); // value is 94
    printf("value is %d\n", o3.getvalue()); // value is 141
    return 0;
}
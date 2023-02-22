/**
 * @file class016-auto_type.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-06-24
 *
 * Chapter 03: Data Types
 * Class 016 - The auto Type
 */

#include <cstdio>
#include <string>
#include <typeinfo>
#include <vector>

std::string &func()
{
    static std::string s = "this is a string";
    return s;
}

int main()
{
    // C++ 11+

    auto x = func(); // x is a string and the compiler knows
    printf("x is %s\n", x.c_str());
    printf("type of x is %s\n", typeid(x).name());

    // auto type in vectors
    std::vector<int> vi = {1, 2, 3, 4, 5};
    // for (std::vector<int>::iterator it = vi.begin(); it != vi.end(); ++it)
    for (auto it = vi.begin(); it != vi.end(); ++it)
    {
        printf("int is %d\n", *it);
    }

    return 0;
}

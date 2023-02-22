/**
 * @file class010-struct.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-06-24
 *
 * Chapter 03: Data Types
 * Class 010 - Structured Data
 */

#include <cstdio>

struct Employee
{
    int id;
    const char *name;
    const char *role;
};

int main()
{
    Employee joe = {42, "Joe", "Boss"};
    Employee *j = &joe;

    /*
        Its the same

        joe.id = 42;
        joe.name = "Joe";
        joe.role = "Boss";
    */

    printf("%s is the %s and has id %d\n",
           joe.name, joe.role, joe.id);

    printf("%s is the %s and has id %d\n",
           j->name, j->role, j->id);

    return 0;
}
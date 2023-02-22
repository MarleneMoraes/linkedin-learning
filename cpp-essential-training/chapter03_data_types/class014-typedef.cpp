/**
 * @file class014-typedef.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-08-05
 *
 * Chapter 03: Data Types
 * Class 014 - Defining Types With typedef
 */

#include <cstdio>

typedef unsigned char points_t; //_t is typedef in good practices
typedef unsigned char rank_t;

struct score
{
    points_t p;
    rank_t r;
};

int main()
{
    score s = {5, 1};
    printf("score s had %d points and a rank of %d\n", s.p, s.r); // score s had 5 points and a rank of 1

    return 0;
}

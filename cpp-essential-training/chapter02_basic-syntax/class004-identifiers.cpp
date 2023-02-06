/**
 * @file class004-identifiers.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-18
 * updated 2020-06-24
 *
 * Chapter 02: Basic Syntax
 * Class 004 - Identifiers
 */

#include <cstdio>

int main()
{

   // this code not compiles some systems
   int 数字 = 42;
   printf("The value of 数字 is %d\n", 数字);

   // identifiers in global namespace

   _GLIBCXX_HAVE_SYS_TIME_H;
   int global_variable_ = 0;

   return 0;
}

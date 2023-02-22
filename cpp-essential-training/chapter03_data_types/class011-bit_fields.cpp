/**
 * @file class011-bit_fields.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-06-24
 *
 * Chapter 03: Data Types
 * Class 011 - Bit Fields
 */

#include <cstdio>

struct Prefs
{
    bool likesMusic : 1; // 1 bit
    bool hasHair : 1;
    bool hasInternet : 1;
    bool hasDinosaur : 1;
    unsigned int numberOfChildren : 4; // 4 bits
};

int main()
{
    Prefs homer;
    homer.likesMusic = true;
    homer.hasHair = false;
    homer.hasInternet = true;
    homer.hasDinosaur = false;
    homer.numberOfChildren = 3;

    printf("sizeof homer: %zd bits\n", sizeof(homer) * 8);
    printf("sizeof int: %zd bits\n", sizeof(int) * 8);

    if (homer.likesMusic)
        printf("homer likes music\n");
    if (homer.hasHair)
        printf("homer has hair\n");
    if (homer.hasInternet)
        printf("homer has net\n");
    if (homer.hasDinosaur)
        printf("homer has a dino\n");
    printf("homer has %d children\n", homer.numberOfChildren);

    return 0;
}
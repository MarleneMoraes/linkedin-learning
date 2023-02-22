/**
 * @file class018-challenge.cpp
 * @author Bill Weinman [bw.org] / edit Marlene Moraes
 * @version 0.1
 * @date 2023-01-19
 * updated 2020-06-24
 *
 * Chapter 03: Data Types
 * Class 018 - Challenge: A library Card Data Structure
 */

#include <cstdio>
#include <string>

struct CatalogCard {
    const char * title;
    const char * author;
    const char * publisher;
    const char * subject;
    const char * isbn;
    const char * oclc;
    float ddc;
    short int year_pub;
    short int year_acq;
    short int qtd_stock;
};

main()
{
    CatalogCard lc1 = {
        "The CGI Book", "William E. Weinman", "New Riders",
        "CGI (Computer network protocol)",
        "1562055712 9781562055714", "477166381",
        510.78, 1996, 1997, 2
    };
    
    printf("Title: %s\n", lc1.title);
    printf("Author: %s\n", lc1.author);
    printf("Publisher: %s\n", lc1.publisher);
    printf("Subject: %s\n", lc1.subject);
    printf("ISBN: %s\n", lc1.isbn);
    printf("WorldCat (OCLC): %s\n", lc1.oclc);
    printf("Dewey Decimal: %.2f\n", lc1.ddc);
    printf("Year published: %d\n", lc1.year_pub);
    printf("Year acquired: %d\n", lc1.year_acq);
    printf("Quantity: %d\n", lc1.qtd_stock);

    return 0;
}
#include<stdio.h>
#include<string.h>

struct books                // struct is used to declare a structure (different datatypes), which are grouped together as one datatype
{
    char title[50];
    char author[50];
};

void main()
{
    struct books book1, book2;

    strcpy(book1.title, "The Brief History of Time");
    strcpy(book1.author, "Stephen Hokins");

    printf("Title: %s\n", book1.title);
    printf("Author: %s\n\n", book1.author);

    strcpy(book2.title, "Python Pecific");
    strcpy(book2.author, "Prathmesh Agrawal");

    printf("Title: %s\n", book2.title);
    printf("Author: %s", book2.author);

}
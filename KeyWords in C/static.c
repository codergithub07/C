
// The difference between static and extern is that it allow us to manipulate the variable even out the scope.

#include<stdio.h>

static int a;

void main()
{
    a = 10;
    printf("%d", a);
}
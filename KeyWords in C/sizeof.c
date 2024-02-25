
// The sizeof operator returns the amount of memory a datatype is consuming in bytes

#include<stdio.h>

void main()
{
    int a = 10;
    long long int b = 20;
    printf("integer: %d", sizeof(a));
    printf("\nlong long integer: %d", sizeof(b));
}
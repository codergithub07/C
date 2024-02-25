#include<stdio.h>

void main()
{
    int num;

    printf("Enter amy 5 digit number: ");
    scanf("%d", &num);

    int dig1 = num % 10;
    int dig2 = (num/10) % 10;
    int dig3 = (num/100) % 10;
    int dig4 = (num/1000) % 10;
    int dig5 = (num/10000) % 10;

    printf("%d", dig1);
    printf("%d", dig2);
    printf("%d", dig3);
    printf("%d", dig4);
    printf("%d", dig5);

}
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;

    printf("Enter any number between 1 to 4 for the lucky draw: ");
    scanf("%d", &a);

    switch(a)
    {
        case 1:
        printf("Oh! you lost the price");
        break;
        case 2:
        printf("Congratulations you won the price %c", 1);
        break;
        case 3:
        printf("Oh! you lost the price");
        break;
        case 4:
        printf("Oh! you lost the price");
        break;
        default:
        printf("You must enter the value between 1 and 4 only");
        break;
    }
    return 0;
}
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Tell me whose table you wanna know: ");
    scanf("%d", &a);
    for(int b=1; b<=10; b++)
    {
        printf("%d\n", a*b);
    }
    return 0;
}
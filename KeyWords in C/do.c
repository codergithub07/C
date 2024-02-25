#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a=1;

    do
    {
        printf("%d ", a);
        a++;
    }
    while (a<=5);
    
    return 0;
}
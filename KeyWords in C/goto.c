#include<stdio.h>

void run()
{
    int a = 1;

label:
    printf("%d ", a);
    a++;
    if (a<=10) goto label;
}

void main()
{
    run();
}
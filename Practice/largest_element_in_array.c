#include<stdio.h>

int class(int array[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
    }
    return max;
}

int main(int argc, char const *argv[])
{
    int array[] = {10, 34, 45, 42, 23, 100, 20, 30, 2009};
    int max = class(array, 9);
    printf("The largest number is: %d", max);
    return 0;
}
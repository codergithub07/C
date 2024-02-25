#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("It wont print 6 & will print upto 8 only:\n");

    for(int i=0; i<=10; i++)
    {
        if(i==6)
        {
            continue;           // The continue keyword let the loop to ignore the given value in the condition and continue further
        }

        if(i==9)
        {
            break;              // The break keyword closes the innermost loop when the condition in the if statement is met.
        }

        printf("%d ", i);

    }
    return 0;
}

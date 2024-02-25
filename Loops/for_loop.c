// Draw an astrik mark
// Go to next line
// Draw two astrik marks
// Go to next line
// Draw three astrik marks


#include<stdio.h>

int main()
{
    int n;
    for(int i=0; i<=3; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        n += 1;
    }
}
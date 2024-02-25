#include<stdio.h>

long fact(int a){

    if (a == 0 || a == 1)
    {
        return 1;
    }

    else{
        return a * fact(a-1);
    }
    
}

int main(){
    int a = 0;

    printf("Enter the number whose factorial you want : ");
    scanf("%d", &a);

    printf("%d", fact(a));

    return 0;
}
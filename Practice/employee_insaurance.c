#include<stdio.h>

void main()
{
    int age;
    char g, m, i;

    printf("Are you already insaured? 'y' for yes & 'n' for no: ");
    scanf("%c", &i);

    if(i == 'y'){
        printf("You don't need any insaurance");
    }
    

    else if(i == 'n'){
        printf("Enter your marital status, 'm' for married & 'n' for bacholer: ");
        scanf("%s", &m);
        printf("Enter your age: ");
        scanf("%d", &age);
        printf("Enter your gender, 'm' for male & 'f' for female: ");
        scanf("%s", &g);
        if(g == 'm'){
            if(m == 'm'){
                printf("You will be insaured");
            }
            else if(m == 'n' && age >= 30){
                printf("You will be insaured");
            }
            else{
                printf("You are not eligible for insaurance");
            }

        }

        else if(g == 'f'){
            if(m == 'm'){
                printf("You will be insaured");
            }
            else if(m == 'n' && age >= 25){
                printf("You will be insaured");
            }
            else{
                printf("You are not eligible for insaurance");
            }
        }
    }
    
    else{
        printf("Choose from the options given");
    }   
}
#include<stdio.h>

void main()
{
    FILE *fp;
    char c[50];
    char s[] = " Hello User!";

    fp = fopen("test2.txt", "w");

    fputs(s, fp);

    fclose(fp);

    fp = fopen("test2.txt", "r");

    while(fgetc(fp) != EOF)
    {
        fgets(c, 50, fp);
    }
    
    printf("%s", c);
    
    fclose(fp);

    

}
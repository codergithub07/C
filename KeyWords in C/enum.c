#include<stdio.h>

enum week{sun, mon, tue, wed, thu, fri, sat};

int main(int argc, char const *argv[])
{
    enum week day;
    day = thu;
    printf("%d", day);
    return 0;
}
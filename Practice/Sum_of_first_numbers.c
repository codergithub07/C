#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, l, n;
    printf("Enter the first, the nth & no. of terms you want: ");
    scanf("%d %d %d", &a, &l, &n);
    int ans = n*(a+l)/2;
    printf("The answer is: %d", ans);
    return 0;
}
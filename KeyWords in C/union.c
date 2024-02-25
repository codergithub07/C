#include<stdio.h>

union student
{
    int age;
    float marks;
} s;

void main()
{
    // int age = 19;
    // float marks = 9.9;
    s.age = 19;
    s.marks = 9.9;

    printf("Age: %d\n", s.age);
    printf("CGPA: %f", s.marks);
}
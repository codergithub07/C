#include<stdio.h>

void main() {
    int x1, y1, x2, y2, x3, y3, area;

    printf("Enter Co-ordinates of first point: ");
    scanf("%d", &x1);
    scanf("%d", &y1);

    printf("Enter Co-ordinates of second point: ");
    scanf("%d", &x2);
    scanf("%d", &y2);
    
    printf("Enter Co-ordinates of third point: ");
    scanf("%d", &x3);
    scanf("%d", &y3);

    area = (x1*(y2-y3)) + (x2*(y3-y1)) + (x3*(y1 - y2));

    if (area == 0) {
        printf("The points are collinear!");
    }

    else {
        printf("The points are not collinear.");
    }
}
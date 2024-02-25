#include <stdio.h>

long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void printPascalsTriangle(int numRows) {
    for (int i = 0; i < numRows; i++) {
        
        for (int j = 0; j <= numRows - i - 1; j++) {
            
            printf(" ");
            
        }
        
        for (int j = 0; j <= i; j++) {
            printf("%2ld", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }
}

int main() {
    int numRows;

    // Get the number of rows from the user
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);

    // Check for non-negative input
    if (numRows < 0) {
        printf("Number of rows should be non-negative.\n");
        return 1; // Exit with an error code
    }

    // Print Pascal's Triangle
    printPascalsTriangle(numRows);

    return 0;
}

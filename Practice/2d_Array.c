#include <stdio.h>
#include <string.h>

int main() {
  
    char* main_arr[3];

    char arr1[4] = "";
    char arr2[4] = "";
    char arr3[4] = "";

    
    main_arr[0] = arr1;
    main_arr[1] = arr2;
    main_arr[2] = arr3;

   
    printf("Enter strings x++, x--, ++x :\n");

  
    for (int i = 0; i < 3; ++i) {
        scanf("%s", main_arr[i]);  
    }

    for (int i = 0; i < 3; ++i) {
        printf("Output %d: %s\n", i + 1, main_arr[i]);
    }

    return 0;
}

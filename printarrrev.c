#include <stdio.h>
#define SIZE1 3
#define SIZE2 4
int main () {
    int arr1[SIZE1] = {};
    int arr2[SIZE2] = {};
    printf("Enter the elements of first array : ");
    for(int i = 0; i < SIZE1; ++i) {
        scanf("%d", &arr1[i]);
    }
    for(int j = 0; j < SIZE2; ++j) {
        scanf("%d", &arr2[j]);
    }
    for(int i = 0;i  < SIZE1 + SIZE2; ++i) {
        if(i < SIZE1) {
        printf("%d", arr1[SIZE1 -i  - 1]);
    }
        else {
            printf("%d", arr2[(SIZE1 + SIZE2) - i - 1 ]);
        }
}
return 0;
}

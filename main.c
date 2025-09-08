#include <stdio.h>
#include "e.h"
int main () {
    float n = 0;
    printf("Enter the fareneheit : ");
    scanf("%f", &n);
    float res = tocelsius(n);
    printf("%f", res);
    return 0;
}

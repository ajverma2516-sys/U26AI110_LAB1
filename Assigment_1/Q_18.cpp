#include <stdio.h>

int main() {
    float a, b, c, max;
    
    printf("enter a b c = ");
    scanf("%f %f %f", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("max %f", max);
}


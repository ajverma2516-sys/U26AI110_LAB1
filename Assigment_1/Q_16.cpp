#include <stdio.h>

int main() {
    float a, b, c;
    printf("enter a b c = ");
    scanf("%f %f %f", &a, &b, &c);

    if (a >= b) {
        if (a >= c) {
            printf("max %f", a);
        } else {
            printf("max %f", c);
        }
    } 
    else {
        if (b >= c) {
            printf("max %f", b);
        } else {
            printf("max %f", c);
        }
    }

    return 0;
}



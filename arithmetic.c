#include <stdio.h>
int main() {
    float a = 23;
    int b = 10;
    int sum = a + b;
    int sub = a - b;
    int mul = a * b;
    float div = a / b;
    // int mod = a % b;
    printf("sum: %d\n", sum);
    printf("sub: %d\n", sub);
    printf("mul: %d\n", mul);
    printf("div: %.2f\n", div);
    // printf("mod: %d", mod);
    return 0;
}
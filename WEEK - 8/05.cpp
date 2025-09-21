#include <stdio.h>

int hcf(int a, int b) {
    return b == 0 ? a : hcf(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("HCF: %d\nLCM: %d\n", hcf(num1, num2), lcm(num1, num2));

    return 0;
}


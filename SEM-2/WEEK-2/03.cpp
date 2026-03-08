#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

void inputComplex(struct Complex* c) {
    printf("Enter real part: ");
    scanf("%f", &c->real);
    printf("Enter imaginary part: ");
    scanf("%f", &c->imag);
}

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag; 
    return result;
}

void displayComplex(struct Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    struct Complex c1, c2, result;

    printf("Enter the first complex number:\n");
    inputComplex(&c1);
    printf("Enter the second complex number:\n");
    inputComplex(&c2);

    result = addComplex(c1, c2);

    printf("The sum of the complex numbers is: ");
    displayComplex(result);

    return 0;
}

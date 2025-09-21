#include <stdio.h>

int main() {
    int number, new_number = 0;
    
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);

    if (number < 10000 || number > 99999) {
        printf("Please enter a valid 5-digit number.\n");
        return 1;
    }

    for (int i = 10000; i > 0; i /= 10) {
        int digit = (number / i) % 10;
        digit = (digit + 1) % 10;
        new_number = new_number * 10 + digit;
    }

    printf("New number: %d\n", new_number);
    return 0;
}


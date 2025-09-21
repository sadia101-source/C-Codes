#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", t1, t2);  // Print the first two terms

    // Loop to generate the Fibonacci series
    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;  // Calculate the next term
        printf(", %d", nextTerm);  // Print the next term

        // Update the previous two terms
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");  // Print newline for better formatting

    return 0;
}


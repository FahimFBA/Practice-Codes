#include <stdio.h>

int find_factorial(int n) {
    if (n == 0) {
        return (1);
    }

    return (n * find_factorial(n - 1));
}


int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int rec = find_factorial(number);
    printf("The factorial is: %d\n", rec);
    return 0;
}



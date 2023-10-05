#include <stdio.h>

void printSum(int num1, int num2) {
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
}

int main() {
    printSum(5, 3); // Calls the void function with arguments
    return 0;
}

#include <stdio.h>

int calculateSum(void) {
    int num1 = 5;
    int num2 = 3;
    int sum = num1 + num2;
    return sum;
}

int main() {
    int result = calculateSum(); // Calls the function with no arguments
    printf("Sum: %d\n", result); // Output: Sum: 8
    return 0;
}

#include <stdio.h>

int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int main() {
    int result = add(5, 3);
    printf("Sum: %d\n", result); // Output: Sum: 8
    return 0;
}

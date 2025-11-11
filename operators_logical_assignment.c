// CANOVAS, ABIGAIL FAITH O. DIT 1-2
// Using operators, logical operations, and assignment operators


#include <stdio.h>

int main() {
    int a = 10, b = 6;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float quotient = (float)a / b;

    printf("Arithmetic Operations:\n");
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %.2f\n", quotient);

    // Logical Operations
    printf("\nLogical Operations:\n");

    if (a > b && b < 10)
        printf("Condition 1: A is greater than B AND B is less than 10\n");
    else
        printf("Condition 1: False\n");

    if (a == 10 || b < 20)
        printf("Condition 2: A equals 10 OR B is less than 20\n");
    else
        printf("Condition 2: False\n");

    if (!(a < b))
        printf("Condition 3: NOT (A < B) is TRUE\n");
    else
        printf("Condition 3: False\n");

    // Assignment Operators
    printf("\nAssignment Operations:\n");
    int x = 10;
    printf("Initial value of x: %d\n", x);

    x += 5;
    printf("After x += 5: %d\n", x);

    x -= 3;
    printf("After x -= 3: %d\n", x);

    x *= 2;
    printf("After x *= 2: %d\n", x);

    x /= 4;
    printf("After x /= 4: %d\n", x);

    x %= 3;
    printf("After x %%= 3: %d\n", x);

    return 0;
}

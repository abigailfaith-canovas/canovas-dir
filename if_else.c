// CANOVAS, ABIGAIL FAITH O. DIT 1-2
// Using if-else Statements

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number to check even or odd: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);

    return 0;
}

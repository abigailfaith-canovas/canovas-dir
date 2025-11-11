// CANOVAS, ABIGAIL FAITH O. DIT 1-2
// Using Loops


#include <stdio.h>

int main() {
    printf("While loop (1 to 10):\n");
    int i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    printf("\n\nFor loop (even numbers 2 to 20):\n");
    for (int j = 2; j <= 20; j += 2)
        printf("%d ", j);

    printf("\n\nDo-while loop (1 to 5):\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);

    printf("\n");
    return 0;
}

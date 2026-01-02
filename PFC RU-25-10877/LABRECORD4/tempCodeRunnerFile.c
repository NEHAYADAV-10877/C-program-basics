#include <stdio.h>

/* Function to swap two numbers using pass by reference */
void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);   // pass addresses

    printf("After swapping:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}



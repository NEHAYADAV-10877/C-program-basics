#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int amount_to_pay = A - B;

    if (amount_to_pay < 0)
        amount_to_pay = 0;

    printf("%d\n", amount_to_pay);

    return 0;
}

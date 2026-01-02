#include <stdio.h>

int main() {
    int P, N;
    float D, total;
    
    scanf("%d %d %f", &P, &N, &D);
    
    float price = P * N;
    total = price - (price * D / 100);
    
    printf("*** DIWALI FIREWORKS ***\n");
    printf("Item Price:\t%d rupees\n", P);
    printf("Quantity:\t%d\n", N);
    printf("Discount:\t%.2f%%\n", D);
    printf("Total:\t%.2f rupees\n\a", total);
    
    return 0;
}
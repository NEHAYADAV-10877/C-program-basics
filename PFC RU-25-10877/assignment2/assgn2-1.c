#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    
    if (B >= 3 * A)
        printf("Rain 🌧");
    else
        printf("Dry ☀");
    
    return 0;
}
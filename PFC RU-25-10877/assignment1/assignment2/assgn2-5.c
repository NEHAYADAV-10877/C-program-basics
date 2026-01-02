#include <stdio.h>

int main() {
    int L;
    scanf("%d", &L);

    switch (L) {
        case 1:
            printf("10");
            break;
        case 2:
            printf("20");
            break;
        case 3:
            printf("30");
            break;
        case 4:
            printf("40");
            break;
        case 5:
            printf("50");
            break;
        default:
            printf("Invalid Level!");
    }

    return 0;
}

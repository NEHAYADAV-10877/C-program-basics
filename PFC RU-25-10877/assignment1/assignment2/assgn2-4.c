#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int total_leaves;
    if (N == 1)
        total_leaves = 4;
    else
        total_leaves = 4 + (N - 1) * 3;
    
    printf("%d", total_leaves);
    
    return 0;
}
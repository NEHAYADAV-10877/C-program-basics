#include <stdio.h>
int main(){
for (int i = 1; i <= 10; i++){
printf("%d\n",i);
}
return 0;
}




//loop to calculate the sum of first n natural number
#include <stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += i;
    }
    printf("sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}




//Break and continue in loops


#include <stdio.h>
int main(){
    for(int i = 1; i <= 5; i++){
        if(i == 3)
        continue;

        printf("%d ", i);
    }

    return 0;
}



//1 Star and 1 number

#include <stdio.h>
int main(){
    int i, j;
    for(i = 1; i <= 4; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
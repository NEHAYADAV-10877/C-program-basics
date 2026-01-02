#include <stdio.h>

/* Function to return square of a number */
int square(int n) {
    return n * n;
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = square(num);

    printf("Square of %d is %d\n", num, result);

    return 0;
}


/*Explain return vs printf in function*/

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(3, 5);
    printf("Sum = %d\n", sum);
    return 0;
}


/*Write functions for prime number check and factorial of a number*/

#include <stdio.h>

/* Function to check whether a number is prime */
int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0;   // not prime

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;   // not prime
    }
    return 1;   // prime
}

/* Function to calculate factorial */
long long factorial(int n) {
    long long fact = 1;
    int i;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    /* Prime check */
    if (isPrime(num))
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);

    /* Factorial */
    if (num < 0)
        printf("Factorial is not defined for negative numbers\n");
    else
        printf("Factorial of %d is %lld\n", num, factorial(num));

    return 0;
}




/*Swap two numbers using pass by reference in functions*/



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



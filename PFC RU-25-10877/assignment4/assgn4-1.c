// Function to reverse a number

#include <stdio.h>

int reverse(int num){
    int rev = 0, digit;
    while (num > 0){
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    return rev;
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number: %d", reverse(num));
    return 0;
}



//Function to check number is palindrome


#include <stdio.h>
int reverse_number(int n){
    int rev = 0;
    while (n != 0){
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
     return rev;
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num)
    printf("%d is a Palindrome.\n", num);
    else
    ("%d is Not a Palindrome.\n", num);
    return 0;
}





//Factorial of number

#include <stdio.h>

int main(){
    int num, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0){
        printf("Factorial is not defined for negative numbers.\n");
    }
    else{
        for(i = 1; i<= num; i++){
            factorial *= i;
        }
        printf("factorial of %d = %11d\n", num, factorial);
    }
    return 0;
}
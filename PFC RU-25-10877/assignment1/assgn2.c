#include <stdio.h>

int main()
 {
    char ch;
    int days;
    float rate, fine;

    scanf("%c %d %f",&ch,&days,&rate);
    fine = days * rate;
    printf("Library Receipt\v");
    printf("Member Initial:%c\v", ch);
    printf("Days:%05d\v", days);
    printf("Fine:%.2f INR\n", fine);

    return 0;
}
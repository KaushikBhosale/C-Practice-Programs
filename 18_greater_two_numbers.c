#include <stdio.h>

int main()
{
    float a,b;

    printf("ENTER THE NUMBER a = ");
    scanf("%f", &a);

    printf("ENTER THE NUMBER b = ");
    scanf("%f", &b);

    if (a>b){
        printf("a = %f is Greater Number",a);
    }
    else if (a<b){
        printf("b = %f is Greater Number",b);
    }
    else {
        printf("(a = %f) = (b = %f) SAME NUMBERS",a,b);
    }
    return 0;
}
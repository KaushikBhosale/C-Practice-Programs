#include <stdio.h>

int main()
{
    float a,b,c;

    printf("ENTER THE NUMBER a = ");
    scanf("%f", &a);

    printf("ENTER THE NUMBER b = ");
    scanf("%f", &b);

    printf("ENTER THE NUMBER c = ");
    scanf("%f", &c);

    if (a==b && a==c)
    {
        printf("%.2f SAME NUMBERS",a);
    }
    
    else if (a>b && a>c){
        printf("a = %.1f is Greater Number",a);
    }

    else if (a<b && c<b){
        printf("b = %.1f is Greater Number",b);
    }

    else {
        printf("c = %.1f is Greater Number",c);
    }

    return 0;
}
#include<stdio.h>
int main()
{
    float a,b;
    printf("ENETER THE NUMBER = ");
    scanf("%f", &a);

    printf("ENETER THE NUMBER = ");
    scanf("%f", &b);

    (a>b)?
    printf("\n%.2f is greater number",a):
    (a<b)?
    printf("\n%.2f is greater number",b):
    printf("\n%.2f = %.2f same number",a,b);

    
    printf("\nDONE");

    return 0;
}
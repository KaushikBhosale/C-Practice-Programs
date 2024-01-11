#include<stdio.h>
int main()
{
    float a,b,c;
    printf("ENETER THE NUMBER = ");
    scanf("%f", &a);

    printf("ENETER THE NUMBER = ");
    scanf("%f", &b);

    printf("ENETER THE NUMBER = ");
    scanf("%f", &c);

    (a==b && a==c)?
    printf("\n%.2f SAME NUMBERS",a):
    (a>b && a>c)?
    printf("\n%.2f is greater number",a):
    (b>a && b>c)?
    printf("\n%.2f is greater number",b):
    printf("\n%.2f is greater number",c);

    
    printf("\nDONE");

    return 0;
}
#include<stdio.h>
int main()
{
    int a,b;
    printf("ENETER THE NUMBER = ");
    scanf("%d", &a);
    b = a%2;
    printf("%d",b);
    (b==0)?
    printf("\n%d is EVEN NUMBER", a):
    printf("\n%d is ODD", a);
    return 0;
}
#include<stdio.h>
int main()
{
    int a;
    printf("ENETER THE NUMBER = ");
    scanf("%d", &a);

    (a>0)?
    printf("%d is Positive", a):
    (a<0)?printf("%d is Negative", a):
    printf("%d is Neither Positive Nor Negative", a);
    return 0;
}
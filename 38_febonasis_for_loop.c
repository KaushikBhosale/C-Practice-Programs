    // Febonasis sum calculation 10 times
    // 0,1,1,2,3,5,8......144
#include <stdio.h>

int main()
{
    int a = 0, b = 1,i=0,c,term;

    printf("ENTER THE TERM :");
    scanf("%d", &term);

    printf("FEBONASIS FROM %d\n%d\t%d",a,a,b);
    for (b = 1; i <= term; i++)
    {
        c = a + b;
        printf("\t%d",c);
        a = b;
        b = c;
    }
    return 0;
}
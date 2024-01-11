#include <stdio.h>
int main()
{
    int a,b,c;
    printf("\nTWO CHECK THE NUMBER EVEN OR ODD");
    printf("\n\nENTER THE NUMBER : ");
    scanf("%d", &a);

    c = a%2, b = 0;
    printf("YOUR ENTERED NUMBER %d IS : (ODD = 1 AND EVEN = 0) %d", a, c!=b);

    printf("\n\nUSING CONDITIONAL STATEMENT");

    if (c==b)
    {
        printf("\nYOUR ENTERED NUMBER %d IS EVEN NUMBER",a);
    }
    else
    {
        printf("\nYOUR ENTERED NUMBER %d IS ODD NUMBER",a);
    }

    printf("\n\nDONE");

    return 0;
}
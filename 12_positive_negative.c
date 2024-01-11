#include <stdio.h>
int main()
{
    float a;
    printf("\nENTER THE NUMBER = ");
    scanf("%f", &a);

    printf("\nENTERED NUMBER IS 0 : %d (IF 1 = TRUE, 0=FALSE)", a==0);
    printf("\nFURTHER CHECK [ONLY IF PREVIOUS STATEMENT IS FALSE]");
    printf("\nENTERED NUMBER %f IS is : %d (POSITIVE = 1  , NEGATIVE = 0)",a, a>0);

    printf("\n\nUSING CONDITIONAL STATEMENT");

    if (a>0)
    {
        printf("\nENTERED NUMBER %f IS POSITIVE", a);
    }
    else if (a<0)
    {
        printf("\nENTERED NUMBER %f IS NEGATIVE", a);
    }
    else
    printf("\nENTERED NUMBER IS 0 IS NEITHER POSITIVE NOR NEGATIVE");

    printf("\n\nDONE");
    return 0;
}
#include <stdio.h>
int main()
{
    int c, py, jv;
    printf("\nENTER THE MARKS OF C PROGRAMMING = ");
    scanf("%d", &c);

    printf("\nENTER THE MARKS OF PYTHON PROGRAMMING = ");
    scanf("%d", &py);

    printf("\nENTER THE MARKS OF JAVA PROGRAMMING = ");
    scanf("%d", &jv);

    printf("\n\t\t\t**********\n\t\t\t* RESULT *\n\t\t\t**********");
    printf("\n\n\tSUBJECT\t\t\t\tMARKS\t\tGRADE/RESULT");

    if (c<35)
    {
        printf("\n\n\tC PROGRAMMING\t\t\t%d\t\tFAIL",c);
    }
    else
    {
        printf("\n\n\tC PROGRAMMING\t\t\t%d\t\tPASS",c);
    }

    if (py<35)
    {
        printf("\n\tPYTHON PROGRAMMING\t\t%d\t\tFAIL",py);
    }
    else
    {
        printf("\n\tPYTHON PROGRAMMING\t\t%d\t\tPASS",py);
    }

    if (jv<35)
    {
        printf("\n\tJAVA PROGRAMMING\t\t%d\t\tFAIL",jv);
    }
    else
    {
        printf("\n\tJAVA PROGRAMMING\t\t%d\t\tPASS\n\n",jv);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int c, py, jv, net, cpp;
    printf("\nENTER THE MARKS OF C PROGRAMMING = ");
    scanf("%d", &c);

    printf("\nENTER THE MARKS OF PYTHON PROGRAMMING = ");
    scanf("%d", &py);

    printf("\nENTER THE MARKS OF JAVA PROGRAMMING = ");
    scanf("%d", &jv);

    printf("\nENTER THE MARKS OF .NET PROGRAMMING = ");
    scanf("%d", &net);

    printf("\nENTER THE MARKS OF C++ PROGRAMMING = ");
    scanf("%d", &cpp);

    printf("\n\t\t\t**********\n\t\t\t* RESULT *\n\t\t\t**********");
    printf("\n\n\tSUBJECT\t\t\t\tMARKS\t\tGRADE / RESULT");

    if (c<35)
    {
        printf("\n\n\tC PROGRAMMING\t\t\t%d\t\tF / FAIL",c);
    }
    else
    {   
        if (c>=80) {
            printf("\n\n\tC PROGRAMMING\t\t\t%d\t\tA / PASS",c);
        }
        else if (c>=60 && c<80) {
            printf("\n\n\tC PROGRAMMING\t\t\t%d\t\tB / PASS",c);
        }
        else if (c>=40 && c<60) {
            printf("\n\n\tC PROGRAMMING\t\t\t%d\t\tC / PASS",c);
        }
        else {
            printf("\n\n\tC PROGRAMMING\t\t\t%d\t\tD / PASS",c);
        }
    }

    if (py<35)
    {
        printf("\n\tPYTHON PROGRAMMING\t\t%d\t\tF / FAIL",py);
    }
    else
    {   
        if (py>=80) {
            printf("\n\tPYTHON PROGRAMMING\t\t%d\t\tA / PASS",py);
        }
        else if (py>=60 && py<80) {
            printf("\n\tPYTHON PROGRAMMING\t\t%d\t\tB / PASS",py);
        }
        else if (py>=40 && py<60) {
            printf("\n\tPYTHON PROGRAMMING\t\t%d\t\tC / PASS",py);
        }
        else {
            printf("\n\tPYTHON PROGRAMMING\t\t%d\t\tD / PASS",py);
        }
    }

    if (jv<35)
    {
        printf("\n\tJAVA PROGRAMMING\t\t%d\t\tF / FAIL",jv);
    }
    else
    {   
        if (jv>=80) {
            printf("\n\tJAVA PROGRAMMING\t\t%d\t\tA / PASS",jv);
        }
        else if (jv>=60 && jv<80) {
            printf("\n\tJAVA PROGRAMMING\t\t%d\t\tB / PASS",jv);
        }
        else if (jv>=40 && jv<60) {
            printf("\n\tJAVA PROGRAMMING\t\t%d\t\tC / PASS",jv);
        }
        else {
            printf("\n\tJAVA PROGRAMMING\t\t%d\t\tD / PASS",jv);
        }
    }

    if (net<35)
    {
        printf("\n\t.NET PROGRAMMING\t\t%d\t\tF / FAIL",net);
    }
    else
    {   
        if (net>=80) {
            printf("\n\t.NET PROGRAMMING\t\t%d\t\tA / PASS",net);
        }
        else if (net>=60 && net<80) {
            printf("\n\t.NET PROGRAMMING\t\t%d\t\tB / PASS",net);
        }
        else if (net>=40 && net<60) {
            printf("\n\t.NET PROGRAMMING\t\t%d\t\tC / PASS",net);
        }
        else {
            printf("\n\t.NET PROGRAMMING\t\t%d\t\tD / PASS",net);
        }
    }

    if (cpp<35)
    {
        printf("\n\tC++ PROGRAMMING\t\t\t%d\t\tF / FAIL",cpp);
    }
    else
    {   
        if (cpp>=80) {
            printf("\n\tC++ PROGRAMMING\t\t\t%d\t\tA / PASS",cpp);
        }
        else if (cpp>=60 && cpp<80) {
            printf("\n\tC++ PROGRAMMING\t\t\t%d\t\tB / PASS",cpp);
        }
        else if (cpp>=40 && cpp<60) {
            printf("\n\tC++ PROGRAMMING\t\t\t%d\t\tC / PASS",cpp);
        }
        else {
            printf("\n\tC++ PROGRAMMING\t\t\t%d\t\tD / PASS",cpp);
        }
    }
float per = (c+py+jv+net+cpp)/5.0;

    if (c<35 && py<35 && jv<35 && net<35 && cpp<35)
    {
        printf("\n\n\t\t\tTOTAL        :  %d",c+py+jv+net+cpp);
        printf("\n\n\t\t\tPERCENTAGE   :  %.2f %%",per);
        printf("\n\n\t\t\tFINAL RESULT : **FAIL**\n");
    }
    else if (c>35 && py<35 || jv<35 || net<35 || cpp<35)
    {
        printf("\n\n\t\t\tTOTAL        :  %d",c+py+jv+net+cpp);
        printf("\n\n\t\t\tPERCENTAGE   :  %.2f %%",per);
        printf("\n\n\t\t\tFINAL RESULT : **A.T.K.T**\n");
    }
    else{
        printf("\n\n\t\t\tTOTAL        :  %d",c+py+jv+net+cpp);
        printf("\n\n\t\t\tPERCENTAGE   :  %.2f %%",per);
        printf("\n\n\t\t\tFINAL RESULT : **PASS**\n");
    }
    return 0;
}
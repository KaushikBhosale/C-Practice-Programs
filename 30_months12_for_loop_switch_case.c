#include <stdio.h>

int main()
{

    int c;
    printf("\nCHOICES ARE");
    printf("\n1  : JAN");
    printf("\t2  : FEB");
    printf("\t3  : MAR");
    printf("\t4  : APR");
    printf("\t5  : MAY");
    printf("\t6  : JUN");
    printf("\n7  : JUL");
    printf("\t8  : AUG");
    printf("\t9  : SEP");
    printf("\t10 : OCT");
    printf("\t11 : NOV");
    printf("\t12 : DEC");

    printf("\nENTER YOUR CHOICE NUMBER TO VIEW MONTH = ");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("\nJANUARY 2023");
        printf("\n MON\t TUE\t WED\t THU\t FRI\t SAT\t SUN");
        printf("\n\t\t\t\t\t  \t 1");
        for (int date = 2; date < 31;)
        {
            printf("\n %d", date);
            date++;
            printf("\t %d", date);
            date++;
            if (date<31){
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;}
        }
        break;

    case 2:
        printf("\nFEBRUARY 2023");
        printf("\n MON\t TUE\t WED\t THU\t FRI\t SAT\t SUN");
        printf("\n\t\t 1\t 2\t 3\t 5\t 6");
        for (int date = 7; date < 29;)
        {
            printf("\n %d", date);
            date++;
            printf("\t %d", date);
            date++;
            if (date<29){
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;}
        }
        
        break;

    case 3:
        printf("\nMARCH 2023");
        printf("\n MON\t TUE\t WED\t THU\t FRI\t SAT\t SUN");
        printf("\n\t\t 1\t 2\t 3\t 5\t 6");
        for (int date = 7; date < 31;)
        {
            printf("\n %d", date);
            date++;
            printf("\t %d", date);
            date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
            if (date<29){
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;}
        }

        break;

    case 4:
        printf("\nAPRIL 2023");
        printf("\n MON\t TUE\t WED\t THU\t FRI\t SAT\t SUN");
        printf("\n\t\t  \t  \t  \t 1\t 2");
        for (int date = 3; date < 30;)
        {
            printf("\n %d", date);
            date++;
            printf("\t %d", date);
            date++;
            printf("\t %d", date);
            date++;
            if (date<30){
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;}
        }

        break;

    case 5:
        printf("\nMAY 2023");
        printf("\n MON\t TUE\t WED\t THU\t FRI\t SAT\t SUN");
        for (int date = 1; date < 31;)
        {
            printf("\n %d", date);
            date++;
            printf("\t %d", date);
            date++;
            printf("\t %d", date);
            date++;
            if (date<31){
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;}
        }

        break;
    
    case 6:
        printf("\nJUNE 2023");
        printf("\n MON\t TUE\t WED\t THU\t FRI\t SAT\t SUN");
        printf("\n\t\t  \t 1\t 2\t 3\t 4");
        for (int date = 5; date < 30;)
        {
            printf("\n %d", date);
            date++;
            printf("\t %d", date);
            date++;
            printf("\t %d", date);
            date++;
            printf("\t %d", date);
            date++;
            printf("\t %d", date);
            date++;
            if (date<30){
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;}
        }

        break;

    case 7:
        printf("\nJULY 2023");
        printf("\n MON\t TUE\t WED\t THU\t FRI\t SAT\t SUN");
        printf("\n\t\t  \t  \t  \t 1\t 2");
        for (int date = 3; date < 32;)
        {
            printf("\n %d", date);
            date++;
            if (date<31){
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;}
        }

        break;

    case 8:
        printf("\nAUGUST 2023");
        printf("\n MON\t TUE\t WED\t THU\t FRI\t SAT\t SUN");
        printf("\n\t 1\t 2\t 3\t 4\t 5\t 6");
        for (int date = 7; date < 31;)
        {
            printf("\n %d", date);
            date++;
            printf("\t %d", date);
            date++;
            printf("\t %d", date);
            date++;
            printf("\t %d", date);
            date++;
            if (date<31){
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;}
        }

        break;

    case 9:
        printf("\nSEPTEMBER 2023");
        printf("\n MON\t TUE\t WED\t THU\t FRI\t SAT\t SUN");
        printf("\n\t\t  \t  \t 1\t 2\t 3");
        for (int date = 4; date < 30;)
        {
            printf("\n %d", date);
            date++;
            printf("\t %d", date);
            date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
            if (date<30){
                printf("\t %d", date);
                date++;}
        }

        break;

    case 10:
        printf("\nOCT 2023");
        printf("\n MON\t TUE\t WED\t THU\t FRI\t SAT\t SUN");
        printf("\n\t\t  \t  \t  \t  \t 1");
        for (int date = 2; date < 31;)
        {
            printf("\n %d", date);
            date++;
            printf("\t %d", date);
            date++;
            if (date<31){
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;}
        }

        break;

    case 11:
        printf("\nNOVEMBER 2023");
        printf("\n MON\t TUE\t WED\t THU\t FRI\t SAT\t SUN");
        printf("\n\t\t  1\t 2\t 3\t 4\t 5");
        for (int date = 6; date < 30;)
        {
            printf("\n %d", date);
            date++;
            printf("\t %d", date);
            date++;
            printf("\t %d", date);
            date++;
            printf("\t %d", date);
            date++;
            if (date<30){
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;
                printf("\t %d", date);
                date++;}
        }

        break;
    
    case 12:
        printf("\nDECEMBER 2023");
        printf("\n MON\t TUE\t WED\t THU\t FRI\t SAT\t SUN");
        printf("\n\t\t  \t  \t 1\t 2\t 3");
        for (int date = 4; date < 31;)
        {
            printf("\n %d", date);
            date++;
            printf("\t %d", date);
            date++;
            printf("\t %d", date);
            date++;
            printf("\t %d", date);
            date++;
            printf("\t %d", date);
            date++;
            printf("\t %d", date);
            date++;
            printf("\t %d", date);
            date++;
        }

        break;

    default:
        printf("\nEnter the valid choice");
        break;
    }

    printf("\n\nDONE");
    return 0;
}
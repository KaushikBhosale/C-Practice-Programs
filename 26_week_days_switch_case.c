#include <stdio.h>

int main()
{

    char c;
    printf("\nCHOICES ARE");
    printf("\nS  : SUN");
    printf("\tm  : MON");
    printf("\tt  : TUE");
    printf("\tw  : WED");
    printf("\tT  : THUR");
    printf("\tf  : FRI");
    printf("\ts  : SAT");

    printf("\nENTER YOUR CHOICE character = ");
    scanf("%c", &c);

    switch (c)
    {
    case 'S':
        printf("\nSUNDAY");

        break;

    case 'm':
        printf("\nMONDAY");
        
        break;

    case 't':
        printf("\nTUESDAY");

        break;

    case 'w':
        printf("\nWEDNESDAY");

        break;

    case 'T':
        printf("\nTHURDAY");

        break;
    
    case 'f':
        printf("\nFRIDAY");

        break;

    case 's':
        printf("\nSATURDAY");
        break;


    default:
        printf("\nEnter the valid choice");
        break;
    }

    printf("\nDONE");
    return 0;
}
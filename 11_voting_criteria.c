#include <stdio.h>
int main()
{
    int age;
    printf("Enter the Age :");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("\nYOU ARE ELIGIBLE FOR VOTING");
        printf("\nWELCOME");
    }

    else
    {
        printf("\nYOU ARE NOT ELIGIBLE TO VOTE");
        printf("\nYOU WILL ELIGIBLE WHEN YOUR AGE IS 18");
    }

    printf("\nTHANKU");
    return 0;
}
#include<stdio.h>
int main()
{
    int user_number,number, power=0,digit,res,i,arm=0;

    printf("\nENTER THE NUMBER : ");
    scanf("%d", &user_number);

    number = user_number; 

    while (number>0)
    {
        power++;
        number/=10;
    }
    printf("\npower is %d\n",power);
    
    number = user_number;

    while (number>0)
    {
        digit = number%10;
        res=1;
        i =0;
        while (i < power)
        {
            res = res * digit;
            i++;
        }
        printf("\n%d^%d   = %d",digit,power,res);
        arm = arm + res;
        number/=10;
    }
    printf("\nTOTAL = %d\n", arm);

    (arm == user_number)?
    printf("\nSo %d = %d is ARMSTRING NUMBER", user_number,arm):
    printf("\nSo %d != %d NOT ARMSTRING NUMBER", user_number,arm);

    
    
    return 0;
}
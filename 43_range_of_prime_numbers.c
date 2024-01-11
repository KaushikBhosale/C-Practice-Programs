#include <stdio.h>

int main()
{
    int number1,number,temp;

    printf("\nENTER THE TWO NUMBER TO GET RANGE OF PRIME NUMBERS\nnumber 1 = ");
    scanf("%d", &number1);

    printf("\nnumber 2 = ");
    scanf("%d", &number);

    if (number1>number)
    {
        temp = number1;
        number1=number;
    }
    else
    {
        temp = number;
        number=number1;
    }
    
    
    printf("\n\tPRIME NUMBERS\t\tNON PRIME NUMBERS");
    printf("\n\t*************\t\t*****************\n");
    
    do
    {
        int divisor=2,is_prime=1;


        if(number<=1){
            is_prime=0;
        }
        else if(number!=2){
            do
            {
                if (number%divisor==0)
                {
                    is_prime=0;
                }
                divisor++;
            }while (number>divisor);

        }
        (is_prime==0)?
        printf("\n\t\t\t\t\t%d", number):
        printf("\n\t\t%d", number);


    number++;
    }while (number<=temp);
    
    return 0;
}
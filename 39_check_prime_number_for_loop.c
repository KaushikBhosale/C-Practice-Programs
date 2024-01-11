            // PRIME NUMBER CHECKING
            // 2 = PRIME NUMBER BECAUSE 2 IS only divisible by itself (2/2 = 1)
            // 4 = NOT A PRIME NUMBER BECAUSE 4 IS Divisible by 2 and 4 and their remainder is 0. 
#include <stdio.h>

int main()
{


    int num,count =2,is_prime=1;

    printf("\nENTER THE NUMBER TO CHECK PRIME NUMBER OR NOT : ");
    scanf("%d", &num);

    if (num<=1){
        is_prime=0;
    }
    else {
        for ( ;count<num;count++)
        {
            if (num%count==0)
            {
                is_prime = 0;
                break;
            }
        }
    }
    if (is_prime==0){
        printf("\n%d NUMBER IS NOT PRIME NUMBER",num);
    }
    else{
        printf("\n%d IS A PRIME NUMBER", num);
        }
    return 0;
}
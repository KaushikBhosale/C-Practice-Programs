#include <stdio.h>
    // power calculation  example (number^power=result)
    //                               [2^4 = 16]
int main() {
    
    int number, power,result=1;

    printf("\nENTER THE NUMBER : ");
    scanf("%d", &number);

    printf("\nENTER THE POWER : ");
    scanf("%d", &power);

    for (int i=0;i<power;i++)
    {
        result*=number;
    }
    printf("\n%d^%d = %d",number,power,result);
    
    return 0;
}



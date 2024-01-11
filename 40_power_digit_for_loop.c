#include <stdio.h>
    // digit power sum calculation  example [12] is a 2 digit number
    //                                     so 12^2 = result
int main() {

    int number,user_number, power, result = 1,i=0;

    printf("Enter the base number: ");
    scanf("%d", &number);

    user_number=number;

    for ( number; number > 0; i++)
    {
         number/=10;
    }
    power=i;

    for (i = 0; i < power; i++) {
        result *= user_number;
    }

    printf("%d^%d = %d\n", user_number, power, result);

    

    return 0;
}
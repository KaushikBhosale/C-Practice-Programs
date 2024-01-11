#include <stdio.h>

int main()
{
    int n,user_num, rev = 0;

    printf("\nENTER THE NUMBER TO Check Palindrome number = ");
    scanf("%d", &n);
    user_num = n;

    for ( n; n != 0;)
    {
        rev = rev * 10 + n%10;
        n = n / 10;
    }

    if (rev==user_num){
        printf("\n%d is Palindrome Number", user_num);}
    else{
        printf("\n%d is Not a Palindrome Number", user_num);
    }
    return 0;
}
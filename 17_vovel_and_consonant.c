#include <stdio.h>

int main()
{
    char a = 'a',e='e',i='i',o='o',u='u',
         A = 'A',E='E',I='I',O='O',U='U',
         user_char;
    
    printf("\nENTER THE CHARACTER : ");
    scanf("%c", &user_char);

    if (user_char==A || user_char==E || user_char==I || user_char==O || user_char==U || user_char==a || user_char==e || user_char==i || user_char==o || user_char==u){
        printf("\n%c IS A VOVEL CHARACTER",user_char);
    }
    else{
        printf("\n%c IS A CONSONANT CHARACTER",user_char);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    int a = 0, b;
    printf("\n\n NORMAL METHOD\n");
    printf("\n %d", a+=1);
    printf("\n %d", a+=1);
    printf("\n %d", a+=1);
    printf("\n %d", a+=1);
    printf("\n %d", a+=1);
    printf("\n %d", a+=1);
    printf("\n %d", a+=1);
    printf("\n %d", a+=1);
    printf("\n %d", a+=1);
    printf("\n %d", a+=1);

    a = 0; b = 0,b++;
    printf("\n\n INCREAMENT METHOD\n");
    printf("\n++a  b++");
    printf("\n %d   %d", ++a, b++);
    printf("\n %d   %d", ++a, b++);
    printf("\n %d   %d", ++a, b++);
    printf("\n %d   %d", ++a, b++);
    printf("\n %d   %d", ++a, b++);
    printf("\n %d   %d", ++a, b++);
    printf("\n %d   %d", ++a, b++);
    printf("\n %d   %d", ++a, b++);
    printf("\n %d   %d", ++a, b++);
    printf("\n %d   %d", ++a, b++);

    a = 0,b =0;
    printf("\n\n PRE_INCREAMENT METHOD\n");
    printf("\nb = %d    a = %d", b = ++a, a);
    printf("\nb = %d    a = %d", b = ++a, a);
    printf("\nb = %d    a = %d", b = ++a, a);
    printf("\nb = %d    a = %d", b = ++a, a);
    printf("\nb = %d    a = %d", b = ++a, a);
    printf("\nb = %d    a = %d", b = ++a, a);
    printf("\nb = %d    a = %d", b = ++a, a);
    printf("\nb = %d    a = %d", b = ++a, a);
    printf("\nb = %d    a = %d", b = ++a, a);
    printf("\nb = %d    a = %d", b = ++a, a);

    a = 0, b = 0 ;
    b = a++;
    printf("\n\n POST_INCREAMENT METHOD\n");
    printf("\nb = %d    a = %d", b = a++, a);
    printf("\nb = %d    a = %d", b = a++, a);
    printf("\nb = %d    a = %d", b = a++, a);
    printf("\nb = %d    a = %d", b = a++, a);
    printf("\nb = %d    a = %d", b = a++, a);
    printf("\nb = %d    a = %d", b = a++, a);
    printf("\nb = %d    a = %d", b = a++, a);
    printf("\nb = %d    a = %d", b = a++, a);
    printf("\nb = %d    a = %d", b = a++, a);
    printf("\nb = %d    a = %d", b = a++, a);
    return 0;
}
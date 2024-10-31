//reşit kontrolü.
#include <stdio.h>

int main()
{
    int yas;
    printf("yasinizi giriniz :  ");
    scanf("%d",&yas);
  
     if(yas >=18)
    {
        printf(" reşitsiniz ");
    }
    else
    {
        printf("daha büyümen lazım ");
    }
}


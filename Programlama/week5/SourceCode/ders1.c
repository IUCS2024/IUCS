#include <stdio.h>

int main()
{
    int a,b;
    printf("birinci sayiyi girin:  ");
    scanf("%d",&a);
    printf("ikinci sayiyi girin   ");
    scanf("%d",&b);

    if(a > b)
    {
        printf("birinci sayi :(%d) buyuktur. \n",a);
    }
    else if(b > a)
    {
    printf("ikinci sayi (%d) buyuktur\n ",b);
    }
    else{
    printf("sayilar esittir.\n");
    }
return 0;
}

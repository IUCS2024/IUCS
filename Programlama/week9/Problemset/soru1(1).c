//1. Bir tamsayı değişken tanımlayıp, bu değişkenin değerini bir gösterge aracılığıyla iki katına çıkaran C kodu yazın.
#include <stdio.h>

int main()
{
    int x;
    printf("lutfen sayinizi giriniz: ");
    scanf("%d",&x);
    int *ptrx=&x;
    *ptrx*=2;
    printf("sayinizin 2 kati : %d\n",x);



    return 0;
}

#include <stdio.h>

int main()
{
    float f;
    double d;
    printf("bir ondalikli sayi giri: ");
    scanf("%f",&f);
    printf("bir cift hassasiyetli sayi girin : ");
    scanf("%lf",&d);
    printf("toplam %.2f\n",f+d);
    printf("fark %.2f\n",f-d);
    printf("carpim %.2f\n",f*d);

return 0;

}

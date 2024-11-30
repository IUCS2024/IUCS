//vkı alıcaksın boy kilo al bunların indexini bul zayıf ,normal,kilolu,obez sırala
    //vki =kilo/boy*boy
#include<stdio.h>
float index(float boy,float kilo);

int main(void)
{
    float kilo,boy,vki;

    printf("Boyunuzu giriniz(m): ");
    scanf("%f",&boy);
    printf("Kilonuzu giriniz(kg): ");
    scanf("%f",&kilo);
    vki = index(boy,kilo);
    printf("boy kilo indeksiniz: %.2f \n",vki);
    if(vki<18.5)
    {
        printf("zayifsiniz\n");
    }
    else if((vki>=18.5) && (vki<24.9))
    {
        printf("normalsiniz\n");
    }
    else if((vki>=25) && (vki<29.9))
    {
        printf("kilolusunuz\n");
    }
    else if(vki>=30)
    {
        printf("obezsiniz \n");
    }
    return 0;
}
float index(float boy,float kilo)
{
    float vki = kilo/(boy*boy);
    return vki;
}

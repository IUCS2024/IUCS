//aşağıda bir tamsayi dizsinin elemanlarını belirle bir değeri kullanarak değiştiren kullanıcıdan elemanları alır ve belli bir eğeri kullanarak elemanları değiştirir.
#include <stdio.h>

void dizidegistir(int *ptr, int boyut,int yenideger){

    for(int i=0;i<boyut;i++)
    {
        *(ptr+i)=yenideger;
    }
}



int main()
{
    int boyut;
    printf("dizinin boyutunu giriniz:  ");
    scanf("%d",&boyut);
    int dizi[boyut];

    printf("dizinin elmanları:\n");
    for(int i=0;i<boyut;i++)
    {
        printf("%d. eleman: ",i+1);
        scanf("%d",&dizi[i]);
    }
   int yenideger;
   printf("lutfen hepsi icin yeni bir deger girin: ");
   scanf("%d",&yenideger);
    dizidegistir(dizi,boyut,yenideger);
    printf("degistirilen dizi elemanları:\n");
    for(int i=0;i<boyut;i++)
    {
        printf("%d. eleman = %d \n",i+1,dizi[i]);
    }
    return 0;
}

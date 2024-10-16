#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tek_toplam=0,cift_toplam=0,N;
    printf("Bir N sayisi giriniz: ");
    scanf("%d",&N);
    for(int i=0;i<=N;i++)
    {
        //cift olanlar icin
        if(i%2==0)
        {
            cift_toplam+=i;
        }
        //tek olanlar  icin
        else if(i%2==1)
        {
            tek_toplam+=i;
        }
    }
    printf("0'dan %d kadar olan tek sayilarin toplami:%d\n",N,tek_toplam);
    printf("0'dan %d kadar olan cift sayilarin toplami:%d\n",N,cift_toplam);





    return 0;
}

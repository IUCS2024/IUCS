#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ortalama=0;
    int i,toplam=0,N,sayi;
    printf("kaç adet sayi toplanacak:   ");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("%d. sayiyi gir: ",i+1);
        scanf("%d",&sayi);
        toplam+=sayi;
    }
    ortalama=(double)toplam/N;
    printf("girilen sayilarin toplami: %d\n",toplam);
    printf("girilen sayilarin ortalamasi %f",ortalama);

return 0;
}


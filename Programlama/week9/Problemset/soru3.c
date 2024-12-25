/*3. Başlangıç değerleriyle tanımlanan bir tamsayı dizisinin elemanlarını terminale tersten yazdıran C kodunu
yazınız. Tersten yazdırma işlemi fonksiyon ile ve gösterge kullanılarak yapılacak. Dizinin eleman sayısı 8-10
civarında ve birbirinden farklı olarak kabul edilsin.*/
#include <stdio.h>
void tersten_yazma(int *ptr,int boyut)
{
for(int i=boyut;i>0;i--)
{
    printf("%d\n",*(ptr+i-1));
}
}

int main()
{
    int dizi[8]={2,3,1,4,5,6,8,7};
    int *ptr=dizi;
    int boyut = sizeof(dizi)/sizeof(int);
    tersten_yazma(ptr,boyut);
    return 0;
}

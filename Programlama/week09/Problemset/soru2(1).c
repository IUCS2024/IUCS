/*2. Başlangıç değerleriyle tanımlanan bir tamsayı dizisinin elemanlarını gösterge kullanarak, "Dizinin elemanları:"
şeklindeki başlığın altına "1. eleman: ", "2. eleman: " şeklinde sırayla terminal yazdıran C kodunu yazınız. Dizinin
eleman sayısı 5-6 civarında ve birbirinden farklı olarak kabul edilsin.*/
#include <stdio.h>

int main()
{
    int dizi[5]={4,5,3,1,2};
    int *ptr=dizi;
    for(int i=1;i<=sizeof(dizi)/sizeof(int);i++)
    {
        printf("%d. eleman: %d\n",i,*(ptr+i-1));
    }


    return 0;
}

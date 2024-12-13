//bir dizi olucak  6 elemanlı elemanları kullanıcıdna alıcaskın sonra bu dizinin kaçıncı elamanı oldugunu söyle

#include <stdio.h>

int main()
{
    int index,max=0;
    int n=6;
    int dizi[n];
    for(int i=0;i<6;i++)
    {
       printf("dizinin %d. elamanını giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    if(max<dizi[i])
    {
        max=dizi[i];
        index=i;
    }
       }
       printf("dizinin en büyük elemanı %d \n bu dizinin %d. elemanı\n",max,index+1);
       return 0;
}

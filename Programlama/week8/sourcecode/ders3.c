//bubble sort ile 1 diziyi sıralamak
//ilk başta bakıyor if j>j+1 ise temp = j j=j+1 j+1=temp
#include <stdio.h>

int main()
{
    int dizi[100],n;
    printf("dizinin eleman sayisini giriniz\n");
    scanf("%d",&n);
    printf("dizinin elemanlarını giriniz\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&dizi[i]);
    }
    int temp;
    /* n-i-1 yapmamızın sebebi k ve k+1 i karşıllaştırıken k+1 in taşmaması için -1 var -i de sıralı olanlara tekrar bakmasın diye sondakilere */
    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n-j-1;k++)
        {
            if(dizi[k]>dizi[k+1])
            {
                temp = dizi[k];
                dizi[k] = dizi[k+1];
                dizi[k+1] = temp;
            }
        }
    }
    for(int l=0;l<n;l++)
    {
        printf("%d ",dizi[l]);
    }
    return 0;
}

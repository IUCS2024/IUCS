//piramit oluşturucaz n yüksekliğinde
#include <stdio.h>

int main()
{
    int yukseklik;
    printf("Yukseklik: ");
    scanf("%d",&yukseklik);
    //piramidin artarak giden ilk yarısı
    for(int i=1;i<=yukseklik-1;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
    printf("\n");
    }
    //piramidin azalarak giden 2. yarısı
    for(int g=yukseklik;g>0;g--)
    {
        for(int n=0;n<g;n++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

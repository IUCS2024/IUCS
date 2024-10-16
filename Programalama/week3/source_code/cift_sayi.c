#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,alt,ust;
    int toplam=0;
    printf("Alt siniri giriniz: ");
    scanf("%d",&alt);
    printf("Ust siniri giriniz: ");
    scanf("%d",&ust);

    //sinir kontrolu
    if(alt>ust)
    {
        printf("alt sinir ust sinirdan  buyuk olamaz\n");
        return 1;
        //"return 1 "hata durumunu bildirir
    }
    printf("cift sayilar: ");
    for(i=alt;i<=ust;i++)
    {
        if(i%2==0)
        {
            toplam+=i;
            printf("%d,",i);
        }
    }
    printf("\n cift sayilarin toplami=%d\n",toplam);

    return 0;
}


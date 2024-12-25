//bir matrisin satır ve sütünları yer değiştiricek transpoz alınıcak
//yani dizi i j   = dizi j i olucak deneyelim
//satır ve sütünları kullanıcıdan al

#include <stdio.h>

int main()
{
    int k,l;
    printf("satır giriniz: ");
    scanf("%d",&k);
    printf("sutun giriniz: ");
    scanf("%d",&l);

    int dizi[k][l];
    int transpoz[l][k];
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<l;j++)
        {
            printf(" %d. satırın %d. sutununu giriniz",i+1,j+1);
            scanf("%d",&dizi[i][j]);
                transpoz[j][i]=dizi[i][j];
        }
    }
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<k;j++)
        {
            printf("%4d",transpoz[i][j]);
        }
        printf("\n");
    }

    return 0;
}


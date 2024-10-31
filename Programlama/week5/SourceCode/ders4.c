//girilen yıl ve ay sarısına göre ayın kaç gğn oldugunu vericek
#include <stdio.h>

int main()
{
int yil,ay;
printf("yılı giriniz: ");
scanf("%d",&yil);
printf("ayi giriniz: ");
scanf("%d",&ay);
    switch (ay)
    {
        case 2: //şubat
        if((yil % 4 ==0 && yil % 100 != 0) || (yil % 400 ==0))
        {
            printf("%d yılı şubat ayında 29 gün var.\n",yil);
        }
        else {
            printf("%d yılı şubat ayında 28 gün var .\n",yil);
        }
        break;
        //ocak,mart,mayıs,temmuz,ağustos,ekim,aral 31 gün
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("%d yili %d. ayda 31 gün var .\n",yil,ay);
        break;
        //nisan,haziran,eylül,kasım
        case 4: case 6: case 9: case 11:
         printf("%d yili %d. ayda 30 gün var .\n",yil,ay);
         break;
         default:
         printf("geçersiz bir ay girdiniz (1-12) arası bir ay girin.\n");
         break;
    }
    return 0;
}

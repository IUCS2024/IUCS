/* Kullanıcıdan bir döngü içinde aldığı ad ve yaş bilgilerini "İsim: --, Yaş: --" yazım düzeni ile "kişiler.txt" dosyasına
yazdıran kodu hazırlayınız. Döngüden çıkış boş karakter ile sağlanacaktır.*/
#include <stdio.h>
typedef struct
{
int yas;
char isim[100];
}insanlar;

int main()
{
    insanlar kisi;
    FILE *f = fopen("kisiler.txt","w");
    if(f==NULL)
    {
        printf("dosya bulunamadı");
        return 1;
    }
    char ch='a';
    while(ch != ' ')
    {
        printf("kişi ismini girin : ");
        scanf("%s",kisi.isim);
        printf("kisi yaşını girin : ");
        scanf("%d",&kisi.yas);
        fprintf(f,"isim:%s , yas:%d\n",kisi.isim,kisi.yas);
    printf("Bitirmek için \"space\" tuşuna basın, yeni bir kişi eklemek için herhangi bir tuşa basın");
    getchar();
    ch=getchar();
    }
    fclose(f);
    printf("dosyaya yazılmıştır\n");
    return 0;
}

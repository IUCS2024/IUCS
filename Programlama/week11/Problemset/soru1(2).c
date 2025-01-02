/*1. Kullanıcıdan dosya adını aldıktan sonra 1'den 10'a kadar sayıları sırasıyla "Sayı=1", "Sayı=2" şeklinde dosyaya
yazdıran C kodunu hazırlayınız*/
#include <stdio.h>
#include <string.h>

int main()
{
    char dosya[100];
    printf("işlem yapılacak dosya adını giriniz: ");
    fgets(dosya,sizeof(dosya),stdin);
    dosya[strcspn(dosya,"\n")] = '\0';
    FILE *f =fopen(dosya,"w");
    if(f==NULL)
    {
        printf("dosya açılamadı");
        return 1;
    }
    for(int i=1;i<=10;i++)
    {
        fprintf(f,"sayı=%d\n",i);
    }
     printf("Sayılar başarıyla dosyaya yazıldı: %s\n", dosya);
    fclose(f);
    return 0;
}

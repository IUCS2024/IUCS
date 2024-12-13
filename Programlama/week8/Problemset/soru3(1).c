//Kullanıcıdan bir döngü ile aldığı 5 metin dizisini "output.txt" dosyasına yazdıran kodu yazınız.
#include <stdio.h>
#include <stdint.h>//özelleştirilmiş byte kullanabilmek icin yaptım
#include  <string.h>

int main()
{
    FILE *f = fopen("output.txt","w");
    if(f == NULL) //output.txt dosyanız hali hazırda yoksa bu alanı kaldırabilirsiniz "if koşulunu"
    {
        printf("dosya bulunamadı\n");
        return 1;
    }
for(int i=1;i<=5;i++)
{
    char metin[100];
    printf("%d. metini giriniz\n",i);
    fgets(metin,sizeof(metin),stdin);
    int uzunluk = strlen(metin);

    if(metin[uzunluk-1] == '\n')
    {
        metin[uzunluk-1]= '\0';
        uzunluk--;
    }
    fprintf(f,"%d.Metin: %s\n",i,metin);
}
    fclose(f);
    return 0;
}

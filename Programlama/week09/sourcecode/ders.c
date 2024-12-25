//girilen metin palidrom mu yani sonran ve baştan okunuşu aynı mı diye bakılıp ona göre çıktı verilsin
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char metin[100];
    printf("bir metin girin: ");
    fgets(metin,sizeof(metin),stdin);

    metin[strcspn(metin,"\n")]='\0';//eğer bunu anlamadıysanız aşağıdaki işlemle aynı şeyi yapıyor

/*
int uzunluk=strlen(metin);
for(int i=0;i<uzunluk;i++)
{
    if(metin[i]='\n')
    {
        metin[i]='\0';
    uzunluk--;
    break;
    }
}
*/

int uzunluk= strlen(metin);
int palindrom=1;

for(int i=0; i< uzunluk/2;i++)
{
    if(tolower(metin[i]) != tolower(metin[uzunluk-i-1]))//strlen ifadesi 0dan değil de 1 den başladıgı icin 1 cıkarıyoruz
    {
        palindrom = 0;
        break;
    }
}
if(palindrom)
{
    printf("girilen metin palindromdur");
}
else
{
    printf("girilen metin palindrom değil");
}





    return 0;
}

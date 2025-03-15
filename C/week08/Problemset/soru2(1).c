//Kullanıcıdan aldığı bir metni tersten yazdıran kodu yazınız

#include <stdio.h>
#include <string.h>

int main()
{
    char metin[100];
    printf("lutfen metin giriniz: \n");
    fgets(metin,sizeof(metin),stdin);    //en fazla 99 karakter girebilir
    // metini fgets ile aldıgımız icin sonuna "\n" fazladan ekliyor yani stlren yapınca ekstra 1 oluyor
    int uzunluk= strlen(metin);
    if(metin[uzunluk-1]=='\n')//metinin sonunu \n ile değil \0 ile bitmesini sağlıyıp uzunlugu 1 kısaltıyoruz
    {
        metin[uzunluk-1]='\0';
        uzunluk--;
    }

    for(int i=0;i<uzunluk/2;i++)//toplam işlem sayısı sondaki ve baştaki yer değiştirdiği için uzunlugun yarısı olucaktır
    {
        char temp= metin[i];
        metin[i]=metin[uzunluk-i-1];
        metin[uzunluk-i-1] =temp;

    }
    printf("%s\n",metin);

    return 0;
}

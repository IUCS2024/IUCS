//İçinde küçüklü büyüklü harfler bulunan bir metindeki bütün harfleri küçük harfe çevirip terminale yazdıran
//kodu yazınız.
#include <stdio.h>
#include <string.h>// metin uzunlugunu bulabilmek icin
#include <ctype.h>//harf mi bakmak icin ve küçük yazdırmak için

int main()
{
    char metin[1000];
    printf("lutfen metin giriniz: \n");
    fgets(metin,sizeof(metin),stdin);    //en fazla 99 karakter girebilir
    for(int i=0,uzunluk=strlen(metin);i<uzunluk;i++)
    {
        if(isalpha(metin[i]) && isupper(metin[i]))
        {
            metin[i]=tolower(metin[i]);
        }
    }
    printf("%s\n",metin);

    return 0;
}

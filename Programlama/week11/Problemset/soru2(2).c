/* 2. 6-7 satırdan oluşan ve her bir satır kişi isimleri olan "isimler.txt" dosyasından bu isimleri sırayla okutup
terminale yazdıran kodu hazırlayınız.*/
#include <stdio.h>

int main()
{
    FILE *f = fopen("isimler.txt","r");
    if(f==NULL)
    {
        printf("dosya bulunamadı");
        return 1;
    }
    char buffer;
    while((fread(&buffer,sizeof(buffer),1,f))!=0)
    {
        printf("%c",buffer);
    }

    fclose(f);
    return 0;
}

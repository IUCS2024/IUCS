//kullanıcıdan şifre iste. döngümüzün  içibnde şifre bulunacak. doğruluk kontrolü
#include <stdio.h>

int main()
{
int passcode;
    printf("sifreyi giriniz: ");
    scanf("%d",&passcode);

    if(passcode ==1453)
    {
        printf("şifreyi doğru girdiniz.\n");
    }
    else
    {
        printf("şifreyi yanlış girdiniz.\n");
    }

    return 0;
}

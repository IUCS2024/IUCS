#include <stdio.h>
//eğer bu fonksiyonu anlamadıysanız öklid algoritmasına bakmalısınız
int ebob(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return ebob(b,a%b);
}

int main()
{
    int a,b;
    printf("iki sayi giriniz\n");
    scanf("%d%d",&a,&b);

    printf(" bu sayilarin ebobu : %d \n",ebob(a,b));
    return 0;
}

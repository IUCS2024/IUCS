//2 ila 100 arasındaki çift tamkare sayıları bul
#include <stdio.h>
#include <math.h>

int main()
{

    for(int i=2;i<=100;i++)
    {
        //sqrt ile kökünü buldugumuz sayının tam sayı mı olup olmadıgına bakıyoruz
        if((i%2==0) && ((int)sqrt(i))==(sqrt(i)))
        {
            printf("%d sayisi cift ve %.0f sayisinin karesidir\n",i,sqrt(i));
        }
    }
}

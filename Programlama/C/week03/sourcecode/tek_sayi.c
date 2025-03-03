#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,N;

    printf("Bir pozitif tam sayi girin: ");
    scanf("%d",&N);

    printf("1'den %d'ye kadar olan tek sayilar: \n",N);
    for(i=0;i<=N;i++)
    {
        if(i%2==1)
        {
            printf("%d",i);
        }
     printf("\n");
    }

    return 0;
}

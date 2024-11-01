// 1 den 10 a kadar olan sayıların karelerini hesaplayan programı yaz
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int karesi = 1;
    for (int i = 1; i <= 10; i++)
    {
        karesi = i * i;
        printf("%d sayisinin karesi :%d\n", i, karesi);
    }
    return 0;
}

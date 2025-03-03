#include <stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, nextterm;
    printf("fibonacci serisinin kaç terimi verilsin : ");
    scanf("%d", &n);
    printf("fibonacci serisi: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", t1);
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
    printf("\n");
}

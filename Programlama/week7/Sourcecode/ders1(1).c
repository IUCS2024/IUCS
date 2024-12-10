#include <stdio.h>

int main()
{
    float pi = 3.14;
    int yaricap;
    printf("dairenin yarı capi: ");
    scanf("%d",&yaricap);
    float alan = pi*yaricap*yaricap;
    printf("dairenin alanı :%.2f\n",alan);

    return 0;
}

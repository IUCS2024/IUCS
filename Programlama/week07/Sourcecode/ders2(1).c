#include <stdio.h>
#include <time.h>
void guncel_zaman()
{
    time_t now;
    time(&now);
    printf("guncel zaman :%s",ctime(&now));
}

int main()
{
    guncel_zaman();
    return 0;
}

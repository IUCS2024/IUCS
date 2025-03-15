//2 matrisin toplamı
#include <stdio.h>
void matris_toplama(int matris1[2][2],int matris2[2][2])
{
  int toplam[2][2];
  printf("\n MatrisA ile MatrisB'nin Toplamı\n");
    for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      toplam[i][j]=matris1[i][j]+matris2[i][j];
      printf("toplam[%d][%d] = %d\n",i,j,toplam[i][j]);
    }
  }
}

int main()
{
  int matrisA[2][2],matrisB[2][2],toplam[2][2];
printf("\n MatrisA yi giriniz \n");
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      printf("matrisA[%d][%d]: ",i,j);
      scanf("%d",&matrisA[i][j]);
    }
  }
printf("\n MatrisB yi giriniz \n");
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
      printf("matrisB[%d][%d]: ",i,j);
      scanf("%d",&matrisB[i][j]);
    }
  }
matris_toplama(matrisA,matrisB);


  return 0;
}

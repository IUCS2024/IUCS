//dizi üzerinde istatistik(ortalama,mod,medyan)
//dizinin ilk önce sıralı olması lazım medyan ve bulabilmemiz icin
//3 tane fonksiyon olucak  ortalama mod medyan
#include <stdio.h>
void ortalama(int dizi[],int n)
{
  int toplam = 0;
  for(int i=0;i<n;i++)
  {
    toplam+=dizi[i];
  }
  float ortalama = (float)(toplam/n);
  printf("Ortalaması: %.2f\n",ortalama);
}
void mod(int dizi[],int n)
{
   int  max = 1, temp = 1;
    int mod=0;

    for (int i = 1; i < n; i++) {
        if (dizi[i] == dizi[i - 1])
        {
            temp++;
        }
        else
        {
            temp = 1;
        }
        if (max < temp)
        {
            max = temp;
            mod = dizi[i];
        }
      }
    if(mod != 0)
    {
      printf("Mod:%d\n",mod);
    }
    else
    {
      printf("Mod'u Yok\n");
    }
}
void medyan(int dizi[],int n)
{
  float medyan;
  if(n%2 == 0)
  {
    medyan = (float)(dizi[n/2]+dizi[(n/2)-1])/2;
  }
  else
  {
    medyan = (dizi[n/2]);
  }
  printf("Medyan: %.2f\n",medyan);
}

int main()
{
  int dizi[100],n;
  printf("dizide kaç eleman olucak: ");
  scanf("%d",&n);
  printf("Dizin'in elemanlarını giriniz\n");
  for(int i=0;i<n;i++)
  {
    printf("dizi[%d]: ",i);
    scanf("%d",&dizi[i]);
  }
  int temp;
  //sıralıyoruz
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(dizi[j]>dizi[j+1])
      {
        temp=dizi[j];
        dizi[j] = dizi[j+1];
        dizi[j+1]= temp;
      }
    }
  }
  ortalama(dizi,n);
  mod(dizi,n);
  medyan(dizi,n);


  return 0;
}

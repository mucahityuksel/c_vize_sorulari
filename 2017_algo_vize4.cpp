//5x5 lik matrisin kosegen elemanlarının toplamını ekrana yaz.

#include "stdio.h"

int main(int argc, char const *argv[])
{
  int dizi[5][5];
  int i,j;
  int toplam = 0;

  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      printf("1. matrisin %d.%d inci sayisi giriniz:",i,j);
      scanf("%d",&dizi[i][j]);
    }
  }
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      if(dizi[i]==dizi[j])
      {
        toplam += dizi[i][j];
      }
    }
  }
  printf("bu matrisin kosegen elemanlarinin toplami : %d ",toplam);
  return 0;
}

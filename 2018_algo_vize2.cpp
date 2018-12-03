//kullanıcı tarafından 100 boyutlu bir inteeger dizide girilen sayi bir sonraki girilen sayının yarısı olup olmadıgını bulan programın kodu.

#include "stdio.h"
#include "conio.h"

int main(int argc, char const *argv[])
{
int dizi[100];
int i,sayac = 0;

for(i=0;i<100;i++)
{
  printf("dizinin %d. elemanini giriniz: ",i+1);
  scanf("%d",&dizi[i]);
}

for(i=0;i<100;i++)
{
  printf(" %d ",dizi[i]);
}

for(i=0;i<100;i++)
{
  if((dizi[i])==(dizi[i+1]/2))
  {
    sayac++;
    printf("\n%d",dizi[i]);
  }
  printf("\n");
}


  return 0;
}

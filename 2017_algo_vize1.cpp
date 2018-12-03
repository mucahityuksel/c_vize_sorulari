//girilen 100 sayı içinde en buyuk cift sayının kac defa yazıldıgını ekrana yazan programın kodu.
#include "stdio.h"

int main(int argc, char const *argv[])
{
int dizi[100];
int max = 0;
int i,j;
int sayac = 0 ;
int sayac1 = 0;

for(i=0;i<100;i++)
{
  sayac++;
  printf("%d. sayiyi giriniz:",sayac);
  scanf("%d",&dizi[i]);
}
for(i=0;i<100;i++)
{
  if(dizi[i] % 2 == 0 && dizi[i] >= max)
  {
    max = dizi[i];
  }
}
for(i=0;i<100;i++)
{
  if(max ==dizi[i])
  {
    sayac1++;
  }
}
printf("%d sayisi %d defa girildi.\n",max,sayac1);
return 0;
}

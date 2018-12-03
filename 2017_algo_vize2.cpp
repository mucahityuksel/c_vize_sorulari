//dizideki degerler buyuk harf ise yerine * koy kucuk ise buyuk harfe cevir.

#include "stdio.h"

int main(int argc, char const *argv[])
{
  char metin[100];
  int i;

  printf("bir metin giriniz:");
  gets(metin);

  for(i=0;metin[i]!=NULL;i++)
  {
    if((metin[i]>='a')&& (metin[i]<='z'))
    {
      metin[i]-=32;
    }
    else if((metin[i]>='A')&&(metin[i])<='Z')
    {
      metin[i]+=32;
      metin[i]='*';
    }
    printf("%c",metin[i]);
  }
  return 0;
}

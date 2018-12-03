//5 e 5 lik matrisin transpozesini bulan programın kodu.
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"

int main(int argc, char const *argv[])
{

  int matris[5][5];
  int sonuc[5][5];
  int i,j,k;
  srand(time(NULL));
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      matris[i][j] = rand()%10;
    }
  }

  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      printf(" %d ",matris[i][j]);
    }
    printf("\n\n");
  }
  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      sonuc[j][i] = matris[i][j];
    }
  }

  for(i=0;i<5;i++)
  {
    for(j=0;j<5;j++)
    {
      printf("\t %d ",sonuc[i][j]);
    }
    printf("\n\n");
  }
  return 0;
}

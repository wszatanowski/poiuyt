#include<stdio.h>

int main()
{
  // 13, 21, 52 - n kolejnych liczb

  int n;
  printf("Podaj liczbę n: ");
  scanf("%d", &n);
  int i=1;

  int suma=0;
  /*
  for (i=1; i<=n; i++)
    if (i%100 == 13 || i%100 == 21 || i%100 == 52)
    {
      suma = suma + i;
    }
    else
      n++;
 
  while (i<=n)
  {
    if (i%100 == 13 || i%100 == 21 || i%100 == 52)
    {
      suma = suma + i;
    }
    else
      n++;
    i++;
  }
  
  */  
  do
  {
    if (i%100 == 13 || i%100 == 21 || i%100 == 52)
    {
      suma = suma + i;
      printf("%d\n", i);
    }
    else
      n++;
    i++;
  } while (i<=n);  
	
    
  printf("%d\n", suma);
  
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void main(void)
{
  int i;
  
  printf("Gerando 10 valores aleatorios:\n");
  
  srand(time(NULL)); // mudando os valores baseando-se no tempo passado
  
  for (i=0; i < 10; i++)
  {
    printf("%d ", rand() % 100);
  }
  printf("\n");
  
}

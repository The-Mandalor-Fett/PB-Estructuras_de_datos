#include <stdio.h>
#include <stdlib.h>
void KadaneNcuadrado(int *ARR, int T);
int max(int ARR, int BARR);
void KadaneON(int *ARR, int T);
int main(int argc, char const *argv[])
{
  int array[]={-1,5,2,-2,1,3,-4,2,-5,6}, N= 0;
  N=sizeof(array)/sizeof(int);
  KadaneNcuadrado(array,N);
  KadaneON(array,N);
  system("pause");
  return 0;
}
void KadaneNcuadrado(int *ARR, int T)
{
  //Al parecer no funciona correctamente
  //Por lo que no es lo mejor
  int MT= 0, MAC= 0, i= 0, j= 0;
  MT=ARR[0]; MAC= ARR[0];
  printf("Esta funcion es O(n^2)\n");
  if (T==0)
  {
    printf("El tamanio del arreglo es %d\n",T);
  }
  printf("El tamanio del arreglo es %d\n",T);
  for (i = 0; i < T; i++)
  {
    for ( j = i; j < T; j++)
    {
      MAC+= ARR[j];
      if (MAC>MT)
      {
        MT=MAC;
      }
    }
  }
  printf("La suma mas grande de los subarrays es [%d]\n",MT);
}
void KadaneON(int *ARR, int T)
{
  printf("Esta funcion es O(n)\n");
  int MaxA= 0, MaxT= 0, i= 0;
  MaxA= ARR[0]; MaxT= ARR[0];
  for ( i = 0; i < T; i++)
  {
    MaxA= max(ARR[i],MaxA+ARR[i]);
    if (MaxA>MaxT)
    {
      MaxT= MaxA;
    }
  }
  printf("La suma mas grande es [%d]\n",MaxT);
}
int max(int ARR, int BARR)
{
  if (ARR>BARR)
  {
    return ARR;
  }
  return BARR;
}

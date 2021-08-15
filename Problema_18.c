#include <stdio.h>
#include <stdlib.h>
int BinarySR(int *arreglo, int inicio, int final, int objeivo);
void imprimir(int res);
int main(int argc, char const *argv[])
{
  int Arreglo[]={1,2,4,16,28,29,33,40,52,54,55,59,64,65,75,83,89,90,94,95};
  int Inicio= 0, Final= 0, Tamanio= 0, resultado= 0, x= 0;
  Tamanio= sizeof(Arreglo)/sizeof(int);
  Final= Tamanio-1;
  //2 7 29 59 89
  printf("Funcion uno x= 2\n");
  x= 2;
  resultado=BinarySR(Arreglo,Inicio,Final,x);
  imprimir(resultado);
  x= 0; resultado= 0;
  printf("Funcion dos x= 7\n");
  x= 7;
  resultado=BinarySR(Arreglo,Inicio,Final,x);
  imprimir(resultado);
  x= 0; resultado= 0;
  printf("Funcion tres x= 29\n");
  x= 29;
  resultado=BinarySR(Arreglo,Inicio,Final,x);
  imprimir(resultado);
  x= 0; resultado= 0;
  printf("Funcion cuatro x= 59\n");
  x= 59;
  resultado=BinarySR(Arreglo,Inicio,Final,x);
  imprimir(resultado);
  x= 0; resultado= 0;
  printf("Funcion 5 x= 7\n");
  x= 89;
  resultado=BinarySR(Arreglo,Inicio,Final,x);
  imprimir(resultado);

  return 0;
}
int BinarySR(int *arreglo, int inicio, int final, int objeivo)
{
  int medio= 0;
  if (inicio<=final)
  {
    medio=(inicio+final)/2;
    if (arreglo[medio] == objeivo)
    {
      return medio;
    }
    if(arreglo[medio] > objeivo)
    {
      return BinarySR(arreglo,inicio,medio-1,objeivo);
    }
    else
    {
      return BinarySR(arreglo,medio+1,final,objeivo);
    }
  }
  return -1;
}
void imprimir(int res)
{
  if (res == -1)
  {
    printf("No se encontro el elemento\n");
  }
  else
    printf("Se encontro el elemento en la posicion %d\n",res);
  return;
}

#include <stdio.h>
#include <stdlib.h>
void arbolDOBLE(int N, int level);
void arbolTriple(int N, int level);
int main(int argc, char const *argv[])
{
    int N=64, nivel= 0;
    arbolDOBLE(N,nivel);
    arbolTriple(N, nivel);
    system("pause");
    return 0;
    // una manera chistosa y facil de entender que hace arbolDOBLE
    //es este video https://youtu.be/5vP2X9k2bLk
}
void arbolDOBLE(int N, int level)
{
int k= 0;
if (N<=1)
{
  return;
}
printf("Nivel= %d, N= %d\n",level,N);
arbolDOBLE(N/2, level+1);
arbolDOBLE(N/2, level+1);
//Va a ir dividiendo N/2 primero es N luego N/2
//,N/4,N/8 asi hasta 1
// e ira sumando los niveles de uno en uno
}
void arbolTriple(int N, int level)
{
  int k= 0;
  if (N<=0)
  {
    return;
  }
  printf("Nivel= %d, N= %d\n",level,N);
  arbolTriple(N/3,level+1);
  arbolTriple(N/3,level+1);

  arbolTriple(N/3,level+1);
  //Al realiza lo mismo que la version doble pero con N/3
  //N,N/3,N/6,N/9,..., hasta llegar a 1
}

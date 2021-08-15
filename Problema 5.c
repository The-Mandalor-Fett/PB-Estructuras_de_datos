#include <stdio.h>
#include <stdlib.h>
int ******CrearNuevoUniverso(int N);
void CrearD6C(int ******MadeInHeaven, int N);
void DestruirD6C(int ******MadeInHeaven, int N);
int	main(int argc, char **argv)
//Profe no ponga numeros grandes que tarda mucho en imprimir jajaja
{
  int ******D6C= NULL;
  int N=0;
    printf("Programa que aparta memoria para un hexeracto\n");
    printf("Pro favor introduce el tamanio de un lado del hexeracto: ");
    scanf("%d",&N);
    printf("Asignando memoria para un Hexeracto\n");
    printf("Hexeracto antes de crear &[%X]::[%X]\n",&D6C,D6C);
    D6C=CrearNuevoUniverso(N);
	  printf("Hexeracto despues de crear &[%X]::[%X]\n",&D6C,D6C);
    CrearD6C(D6C,N);
    DestruirD6C(D6C,N);
    system("pause");
    return 0;
}
int ******CrearNuevoUniverso(int N)
{
  int ******MadeInHeaven=NULL;
  int A=0,B=0,C=0, D=0,E=0,F=0;
  int i=0,j=0,k=0,l=0,m=0,n=0;
  A= N; B= N; C= N; D= N; E= N; F= N;
  MadeInHeaven=(int ******) malloc(A*sizeof(int*****));
    printf("Tamanio del arreglo en bytes [%d]\n",MadeInHeaven);
    for ( i = 0; i < A; i++)
    {
      MadeInHeaven[i]= (int *****)malloc(B*sizeof(int ****));
      for ( j = 0; j < B ; j++)
      {
        MadeInHeaven[i][j]=(int ****)malloc(C*sizeof(int ***));
        for ( k = 0; k < C; k++)
        {
          MadeInHeaven[i][j][k]=(int ***)malloc(D*sizeof(int **));
          for ( l = 0; l < D; l++)
          {
            MadeInHeaven[i][j][k][l]=(int **)malloc(E*sizeof(int *));
            for ( m = 0; m < E; m++)
            {
              MadeInHeaven[i][j][k][l][m]=(int *)malloc(F*sizeof(int));
              for ( n = 0; n < F; n++)
              {
                MadeInHeaven[i][j][k][l][m][n];

              }

            }

          }

        }

      }
    }
    return(MadeInHeaven);
}
void CrearD6C(int ******MadeInHeaven, int N)
{
  int A=0,B=0,C=0, D=0,E=0,F=0;
  int i=0,j=0,k=0,l=0,m=0,n=0;
  A= N; B= N; C= N; D= N; E= N; F= N;
   for ( i = 0; i < A; i++)
    {
      printf("Pagina [%d]\n",i);
      for ( j = 0; j < B ; j++)
      {
        for ( k = 0; k < C; k++)
        {
          for ( l = 0; l < D; l++)
          {
            for ( m = 0; m < E; m++)
            {
              for ( n = 0; n < F; n++)
              {
                MadeInHeaven[i][j][k][l][m][n]=i*j*k*m*n;
                printf("%d\t",MadeInHeaven[i][j][k][l][m][n]);
              }
              printf("\n");
            }
            printf("\n");
          }
		      printf("\n");
        }
        printf("\n");
      }
	printf("\n");
    }
}

void DestruirD6C(int ******MadeInHeaven, int N)
{
  int A=0,B=0,C=0, D=0,E=0,F=0;
  int i=0,j=0,k=0,l=0,m=0,n=0;
  A= N; B= N; C= N; D= N; E= N; F= N;
  printf("Hexeracto antes de destruir &[%X]::[%X]\n",&MadeInHeaven,MadeInHeaven);
    for ( i = 0; i < A; i++)
    {
      for ( j = 0; j < B ; j++)
      {

        for ( k = 0; k < C; k++)
        {

          for ( l = 0; l < D; l++)
          {
            for ( m = 0; m < E; m++)
            {
              free(MadeInHeaven[i][j][k][l][m]);
            }
            free(  MadeInHeaven[i][j][k][l]);
          }
          free( MadeInHeaven[i][j][k]);
        }
        free(MadeInHeaven[i][j]);
      }
       free(MadeInHeaven[i]);
    }
    free(MadeInHeaven);
    MadeInHeaven= NULL;
    printf("Hexeracto depues de destruir &[%X]::[%X]\n",&MadeInHeaven,MadeInHeaven);
    return;
}

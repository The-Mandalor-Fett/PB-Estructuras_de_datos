#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
    int *AP=NULL, N=0, C=0, K=0;
    printf("Programa que aparta y libera memoria\ntambien inicialzida el k enesimo termino\n");
    printf("Dame un numero\n");
    scanf("%d",&N);
    AP= (int *) malloc(N*sizeof(int)); //Asignamos el bloque de memoria
    for ( K = 0; K < N; K++)
    {
        AP[K]=0; C++; //Inicializamos el arrglo para no tener basura y utilizamos el contador
    }
    for ( K = 0; K < N; K++)
    {
        printf("Valor de AP[%d]= %d :: Localizacion de memoria de &AP[%d]= %X, AP= %X\n",K,AP[K],K,&AP[K],AP);
    }
    printf("\n");
    printf("Ahora se va a inicializar el k esimo termino con el valor entero que se introdujo que es %d \n",C);
    printf("\n");
    AP[N-1]=C;
    for ( K = 0; K < N; K++)
    {
        printf("Valor de AP[%d]= %d :: Localizacion de memoria de &AP[%d]= %X, AP= %X\n",K,AP[K],K,&AP[K],AP);
    }
    free(AP); AP=NULL;
    system("pause");
    return 0;
}

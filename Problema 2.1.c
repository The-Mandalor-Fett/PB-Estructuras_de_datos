#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
    int C=0,K=0,M=100;
    char cad[100], *AP=NULL, NC[100]; 
    printf("Programa que invierte una cadena con aritmetica de  apuntadores\nPor favor introduce un cadena de caracter: ");
    scanf("%s",&cad);
    printf("%s\n", cad);
   AP=(char *)malloc(M*sizeof(char));
    C=0;
    for ( K = 0; cad[K] != '\0'; K++)
    {
        cad[K];
        C ++;
    }
    //printf("%d\n",C);
    AP= &cad[C-1];
    printf("Contenido de AP= %c\n", *AP); //AP se encuentra en la ultima ubicacion de memoria de 
    for ( K = 0, AP; K < C; K++,AP=AP-1)
    {
        NC[K]=*AP;
    }
    printf("Cadena original %s\n", cad);
    printf("Cadena al reves %s\n",NC);
    free(AP);//la liberacion produce un error y no retorna 0
    //system("pause");
    return 0;
}

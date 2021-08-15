#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{  
    int arreglo[]={1,2, 4, 16, 28, 29, 33, 40, 52, 54, 55, 58, 59, 64, 65, 75, 83, 89, 90, 94, 95};
    int inicio= 0, fin= 0, medio= 0, Tamanio= 0, X= 0;
    Tamanio=(sizeof(arreglo)/sizeof(int));
    printf("Tamanio del arreglo %d\n",Tamanio);
    //Queremos los datos 2,7,29,59, 89, buscaremos el dato 89
    X= 2; fin= Tamanio-1;
    while (inicio <= fin)
    {
        medio= (inicio+fin)/2;
        if (arreglo[medio]==X)
        {
            printf("SE encontro el valor de x en la posicion %d\n",medio);
        }
        if (arreglo[medio] < X)
        //Esto es por si el elemento medio es menor a X esto quier decir que
        //X se encuentra mas a la derecha
        {
            inicio= medio+1; //vamos descartando el subarreglo izquierdo
        }
        else
        {
            fin= medio-1; //vamos descartando el sub arreglo derecho
            //Es decir el elemento X esta mas a la izquierda
        }
        
        
    }
    

    system("pause");
    return 0;
}

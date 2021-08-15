#include <stdio.h>
#include <stdlib.h>
int FuncionUno(int arr[],int ini,int final, int dato);
int FuncionDos(int arr[],int ini,int final, int dato);
int FuncionTres(int arr[],int ini,int final, int dato);
int FuncionCuatro(int arr[],int ini,int final, int dato);
int FuncionCinco(int arr[],int ini,int final, int dato);
int	main(int argc, char **argv)
{
    int arreglo[]={1, 2, 4, 16, 28, 29, 33, 40, 52, 54, 55, 58, 59, 64, 65, 75, 83, 89, 90, 94, 95};
    int tamanio= 0,inicio= 0, fin= 0, X= 0, Observador= 0;
    //Implementamos el codigo obtenido en funciones y buscamos 𝑥 = 2,7,29,59, 89;
    //Para retornar un valor tendremos que hacer uso de funciones enteras
    //El valor es solamente para checar si el valor que buscamos existe
    tamanio= sizeof(arreglo)/sizeof(int);
    printf("El tamanio del arreglo es: %d\n",tamanio);
    fin= tamanio-1;
    //El observador sera un sentinela que si detecta un retur de -1 entonces
    //imprimira la leyenda no se encuentra en el arreglo
    X= 2;
    Observador= FuncionUno(arreglo,inicio,fin,X);
    if (Observador!= -1)
    {
        printf("El valor se encuentra en el arreglo\n");
    }
    else
        printf("El valor buscado no se encuentra en el arreglo\n");
    X= 0; X=7; Observador= 0;
    Observador= FuncionDos(arreglo,inicio,fin,X);
    if (Observador!= -1)
    {
        printf("El valor se encuentra en el arreglo\n");
    }
    else
        printf("El valor buscado no se encuentra en el arreglo\n");
    X= 0; X=29; Observador= 0;
    Observador= FuncionTres(arreglo,inicio,fin,X);
    if (Observador!= -1)
    {
        printf("El valor se encuentra en el arreglo\n");
    }
    else
        printf("El valor buscado no se encuentra en el arreglo\n");
    X= 0; X=59; Observador= 0;
    Observador= FuncionCuatro(arreglo,inicio,fin,X);
    if (Observador!= -1)
    {
        printf("El valor se encuentra en el arreglo\n");
    }
    else
        printf("El valor buscado no se encuentra en el arreglo\n");
    X= 0; X=89; Observador= 0;
    Observador= FuncionCinco(arreglo,inicio,fin,X);
    if (Observador!= -1)
    {
        printf("El valor se encuentra en el arreglo\n");
    }
    else
        printf("El valor buscado no se encuentra en el arreglo\n");

    //system("pause");
    return 0;
}
int FuncionUno(int arr[],int ini,int final, int dato)
{
    int medio= 0;
    printf("Funcion uno, numero a buscar %d\n",dato);
    while (ini <= final)
    {
        medio= (ini+final)/2;
        if (arr[medio]==dato)
        {
            printf("Se encontro el valor de x en la posicion %d\n",medio);
            return 1;
        }
        if (arr[medio] < dato)
        //Esto es por si el elemento medio es menor a X esto quier decir que
        //X se encuentra mas a la derecha
        {
            ini= medio+1; //vamos descartando el subarreglo izquierdo
        }
        else
        {
            final= medio-1; //vamos descartando el sub arreglo derecho
            //Es decir el elemento X esta mas a la izquierda
        }
    }
    return -1;
}
int FuncionDos(int arr[],int ini,int final, int dato)
{
    int medio= 0;
    printf("Funcion dos, numero a buscar %d\n", dato);
    while (ini <= final)
    {
        medio= (ini+final)/2;
        if (arr[medio]==dato)
        {
            printf("Se encontro el valor de x en la posicion %d\n",medio);
            return 1;
        }
        if (arr[medio] < dato)
        {
            ini= medio+1;
        }
        else
        {
            final= medio-1;
        }
    }
    return -1;
}
int FuncionTres(int arr[],int ini,int final, int dato)
{
    int medio= 0;
    printf("Funcion tres, numero a buscar %d\n", dato);
    while (ini <= final)
    {
        medio= (ini+final)/2;
        if (arr[medio]==dato)
        {
            printf("Se encontro el valor de x en la posicion %d\n",medio);
            return 1;
        }
        if (arr[medio] < dato)
        {
            ini= medio+1;
        }
        else
        {
            final= medio-1;
        }
    }
    return -1;
}
int FuncionCuatro(int arr[],int ini,int final, int dato)
{
    int medio= 0;
    printf("Funcion tres, numero a buscar %d\n", dato);
    while (ini <= final)
    {
        medio= (ini+final)/2;
        if (arr[medio]==dato)
        {
            printf("Se encontro el valor de x en la posicion %d\n",medio);
            return 1;
        }
        if (arr[medio] < dato)
        {
            ini= medio+1;
        }
        else
        {
            final= medio-1;
        }
    }
    return -1;
}
int FuncionCinco(int arr[],int ini,int final, int dato)
{
    int medio= 0;
    printf("Funcion tres, numero a buscar %d\n", dato);
    while (ini <= final)
    {
        medio= (ini+final)/2;
        if (arr[medio]==dato)
        {
            printf("Se encontro el valor de x en la posicion %d\n",medio);
            return 1;
        }
        if (arr[medio] < dato)
        {
            ini= medio+1;
        }
        else
        {
            final= medio-1;
        }
    }
    return -1;
}

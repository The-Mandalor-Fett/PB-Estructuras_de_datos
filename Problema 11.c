#include <stdio.h>
#include <stdlib.h>
void insercion(int *ARR, int N);
void seleccion(int *ARR, int N);
void burbuja(int *ARR, int N);
void mezclaConApuntador(int *ARR, int inicio, int final, int N);
void Mezclar(int *ARR, int mitad, int inicio, int fin,int N);
void imprimir(int *ARR, int N);
int	main(int argc, char **argv)
{
    int c = 0, i= 0;
    int Tarr= 0, TATD= 0;
    int arr[] = {8,4,1,6,0,3,25,7,9};
    Tarr= sizeof(arr);
    //printf("Tamanio del arreglo en bytes %d\n",Tarr);
    TATD= sizeof(int);
    //printf("Tamanio del tipo entero en bytes %d\n",TATD);
    c= Tarr/TATD;
    printf("Tamanio del arreglo %d\n",c);
    printf("Arreglo antes de ser ordenado\n");
    for ( i = 0; i < c; i++)
    {
        printf("[%d] ",arr[i]);
    }
    printf("\n");
    insercion(arr,c);
    seleccion(arr,c);
    burbuja(arr,c);
    mezclaConApuntador(arr, 0, c-1, c);
    //system("pause");
    return 0;
}

void insercion(int *ARR, int N)
{
    int i= 0, aux= 0, pos= 0;
    for(i= 0; i < N; i++)
    {
        pos= i;
        aux= ARR[i];
        while ((pos>0) && (ARR[pos-1]>aux))
        {
            ARR[pos]= ARR[pos-1];
            pos--;            
        }
        ARR[pos]= aux;
    }
    printf("Ordenamiento por insercion\n");
    for ( i = 0; i < N; i++)
    {
        printf("[%d] ",ARR[i]);
    }
    printf("\n");
    return;
}
void seleccion(int *ARR, int N)
{
    int i= 0, j= 0, min= 0, aux= 0;
    for ( i = 0; i < N; i++)
    {
        min= i;
        for ( j = i+1; j < N; j++)
        {
            if (ARR[i]<ARR[min])
            {
                min= j;
            }
            
        }
        aux= ARR[i]; 
        ARR[i]= ARR[min];
        ARR[min]=aux;
    }
    printf("Ordenamiento por seleccion\n");
    for ( i = 0; i < N; i++)
    {
        printf("[%d] ",ARR[i]);
    }
    printf("\n");
    return;
}
void burbuja(int *ARR, int N)
{
   //{8,4,1,6,0,3,25,7,9};
    int i= 0, j= 0, aux= 0;
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N-1; j++)
        {
   //debemos poner el N-1 porque va a comparar hasta el 9 y al querer comparar el siguente pum va atronar         
            if (ARR[j]>ARR[j+1])
            {
                aux= ARR[j];
                ARR[j]= ARR[j+1];
                ARR[j+1]= aux;
                
            }
        }
    }
    printf("Ordenamiento por burbuja\n");
    for ( i = 0; i < N; i++)
    {
        printf("[%d] ",ARR[i]);
    }
    printf("\n");
    return;
}
void mezclaConApuntador(int *ARR, int inicio, int final,int N)
{
    int mitad = 0,i= 0;
    mitad= (inicio+final)/2;
    //printf("mitad = %d\n",mitad);
    if (inicio<final)
    {
        mezclaConApuntador(ARR,inicio,mitad,N);//lista izquierda
        mezclaConApuntador(ARR, mitad+1,final,N);//lista derecha
        Mezclar(ARR,mitad,inicio,final,N);
        
    }
    else
        return;
}
void Mezclar(int *ARR, int mitad, int inicio, int fin,int N)
{
    int izq= 0, der= 0, Laux[20], k= 0, aux= 0, i= 0, j= 0, v=0;
    izq = inicio; der= mitad+1; aux=0; 
    while (izq<=mitad && der<=fin)
    {
        if (ARR[izq]<ARR[der])
        {
            Laux[aux]= ARR[izq];
            izq++; aux++;
        }
        else
        {
            Laux[aux]= ARR[der];
            der++; aux++;
        }
    }
    //Si no se passaron los valores de la lista derecha
    aux= 0;
    for ( k = der; k < fin; k++)
    {
        Laux[aux]= ARR[k];
        aux++;
    }
    //si no se copiaron los valores de la lista izquierda
    aux= 0;
    for ( k = izq; k < mitad; k++)
    {
        Laux[aux]= ARR[k];
        aux++;
    }
    //Checkpoint
    //Lo primero que notamos es que en las primeras vueltas hay valores que no corresponden
    //esto como lo habiamos dicho es porque hay valores que no se copian y cuando son copiados
    //los valores que no corresponden cambian por los que si
    /*for ( i = 0; i < 9; i++)
    {
        printf("Nivel f[%d]||Arreglo [%d] \n",i,Laux[i]);
    }
    printf("\n");*/
    //Pasamos los valores de la lista auxiliar a la original
    //Recordemos que si no colocamos el valor aux-1 va a tronar y va a querer
    //asignar otros valores despues de auxiliar y va a tronar
    for ( k = 0; k < aux-1; k++)
    {
        ARR[inicio+k]= Laux[k];
    }
    imprimir(ARR,N); //No supe como imprimirlo una vez :C por la recursividad se imprime varias veces
}
void imprimir(int *ARR, int N)
{
    int i= 0;
    printf("Ordenamiento por recursividad o Mezcla (Merge sort)\n");
    for ( i = 0; i < N; i++)
    {
        printf("[%d]",ARR[i]);
    }
    printf("\n");
    return;    
}

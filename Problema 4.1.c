#include <stdio.h>
#include <stdlib.h>
int **CreaMechaGodzillla(int N);
void InicializarGodzilla(int **RAWR, int N);
void InicializarKong(int **RAWR, int N);
void DestruirMechaGodzilla(int **RAWR);
int	main(int argc, char **argv)
{
	int **dinosaurio=NULL;
	int N=0, n=0, m=0;
	printf("Programa que realiza la inicializacion de un apuntador doble como un arreglo\n");
    printf("Por favor introduce la longitud de el entero: ");
    scanf("%d",&N);
    printf("Dinosaurio antes de crear &[%X]::[%X]\n",&dinosaurio,dinosaurio);
	dinosaurio=CreaMechaGodzillla(N);
	printf("Dinosaurio despues de crear &[%X]::[%X]\n",&dinosaurio,dinosaurio);
	InicializarGodzilla(dinosaurio,N);
	for ( m = 0; m < N; m++)
	{
		printf("Valores de dinosaurio[%d]= %d\n",m,dinosaurio[m]);//imprimimos
	}
	printf("\n");
	InicializarKong(dinosaurio,N); 

	DestruirMechaGodzilla(dinosaurio);

    /*dinosaurio=malloc(N*sizeof(int));
    for(n=0; n < N ; n++)
    	dinosaurio[n]=malloc(N*sizeof(int));
    for(m=0; m < N ; m++)
    {
    	if(m%2!=0)
		dinosaurio[m]= 2*m;
		else
		dinosaurio[m]= NULL;
		
    	printf("Valores de dinosaurio[%d]= %d\n",m,dinosaurio[m]);//imprimimos
	}
	for(n=0; n < N; n++)
	{
		if (n%2==0)
        {
         dinosaurio[n]= &(dinosaurio[(n+1)%N][n]);
         printf("Memoria [%X]\n",dinosaurio[n]);
        }
	}
	printf("\n");
    for ( n = 0; n < N; n++)
     	printf("Memoria %X \n",&(dinosaurio[(n+1)%N][n]));
	*/
	system("pause");
	return 0;
}
int **CreaMechaGodzillla(int N)
{
	int **RAWR= NULL; int n=0;
	RAWR=malloc(N*sizeof(int *));
    for(n=0; n < N ; n++)
    	RAWR[n]=malloc(N*sizeof(int));//El error se debe a que nosotros necesitamos primero crear
		// Y dar memoria a las columnas de nuestra matriz
		//para las filas solo necesitamos una vez
	return(RAWR);
}
void InicializarGodzilla(int **RAWR, int N)
{
	int m=0
	;
	 for(m=0; m < N ; m++)
    {
    	if(m%2!=0)
		RAWR[m]= 2*m;
		else
		RAWR[m]= NULL; 
		//Si los valores son pares le asignamos nulo 
	}
	return;
}
void InicializarKong(int **RAWR, int N)
{
	int n=0,x=0;
	for(n=0; n < N ; n++)
    	RAWR[n]=malloc(N*sizeof(int**));
    	//El error se debe a que nosotros necesitamos primero crear
		// Y dar memoria a las columnas de nuestra matriz
		//para las filas solo necesitamos una vez
	for(n=0; n < N; n++)
	{
		if (n%2==0)
        {
         RAWR[n]= &(RAWR[(n+1)%N][n]);
         printf("Memoria [%X]\n",RAWR[n]);
        }
		else
		RAWR[n]=&x;
	}
	printf("\n");
    for ( n = 0; n < N; n++)
	if (n%2!=0)
	{
		printf("Memoria de dinosaurio[(n+1)%N][n] = %X \n",&(RAWR[(n+1)%N][n]));
	}
	printf("\n");
	for ( n = 0; n < N; n++)
	if (n%2==0)
	{
		printf("Memoria de x =%X \n",&(RAWR[(n+1)%N][n]));
		//Asignamos la direccion de un avariable x que vale 0 para diferenciar memorias pares de impares
	}
	
	return;
}
void DestruirMechaGodzilla(int **RAWR)
{	
	// Por alguna razon liberar la memoria causa un error
	printf("Dinosaurio antes de destruir &[%X]::[%X]\n",&RAWR,RAWR);
		free(RAWR);
		RAWR=NULL;
	printf("Dinosaurio despues de destruir &[%X]::[%X]\n",&RAWR,RAWR);
		if(RAWR==NULL)
		printf("memoria liberada\n");
	return ;
}

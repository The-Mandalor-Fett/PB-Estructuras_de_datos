#include <stdio.h>
#include <stdlib.h>
int FactorialRecursivo(int Fact);
int	main(int argc, char **argv)
{
    int Factorial= 0 ,Resultado= 0;
    printf("Este programa va a calcular el factorial mediante recursividad\n");
    printf("Solo se podran introducir valores desde cero hasta 13\n");
    printf("Introduce el valor para el factorial: ");
    scanf("%d",&Factorial);
    if (Factorial>13)
    {
        printf("Se esta excediendo el programa\n");
    }
    else
    {
        Resultado= FactorialRecursivo(Factorial);
        if (Resultado == -1)
        {
            printf("Se introdujo un valor negativo\n");
        }
        else
            printf("El resultado del factorial %d es %d\n",Factorial,Resultado);
    }
    system("pause");
    return 0;
}
int FactorialRecursivo(int Fact)
{
    //Por ejemplo tenemos factorial igual a 4 entonces primero tenemos 4*factorial(4-1)
    //Checa las sentencias y la sentencia base que es la que impide el desborde
    //con la llamada recursiva tenemos ahora 3*factorial(3-1)
    //Asi hasta llegar a uno
    if (Fact<0)
    {
        return -1;
    }
    else if (Fact==0 || Fact==1)//Sentencia base
    {
        return 1;
    }
    else
    {
        return Fact*FactorialRecursivo(Fact-1);
    }
}

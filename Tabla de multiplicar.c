#include <stdio.h>
#include <stdlib.h>
void Tabla(int multp,int multiador,int limit);
int	main(int argc, char **argv)
{
    int multiplicando= 0, multiplicador= 0,fin= 0;
    printf("Introduce el numero que va a se multiplicado: ");
    scanf("%d",&multiplicando);
    printf("Introduce hasta que numero se va a multiplicar: ");
    scanf("%d",&fin);
    Tabla(multiplicando,multiplicador,fin);
    system("pause");
    return 0;
}
//Ejemplo multp= 5    Multiador= 0 limite= 11
//Vuelta[0] multp= 5 multiador= 0 limite= 11
//Vuelta[1] multp= 5 multiador= 1 limite= 11
//Vuelta[2] multp= 5 multiador= 2 limite= 11
//Vuelta[3] multp= 5 multiador= 3 limite= 11
//Vuelta[4] multp= 5 multiador= 4 limite= 11
//Vuelta[5] multp= 5 multiador= 5 limite= 11
//Vuelta[6] multp= 5 multiador= 6 limite= 11
//Vuelta[7] multp= 5 multiador= 7 limite= 11
//Vuelta[8] multp= 5 multiador= 8 limite= 11
//Vuelta[9] multp= 5 multiador= 9 limite= 11
//Vuelta[10] multp= 5 multiador= 10 limite= 11
//Vuelta[11] multp= 5 multiador= 11 limite= 11
//Recursividad
void Tabla(int multp, int multiador,int limit)
{
    int resultado = 0;
    resultado= multp*multiador;
    if (multiador<=limit)//Impide el desbordamiento en mi caso llegó hasta la multiplicacion 5 por 43270 XD
    {
        printf("El resultado de la multi de %d por %d es %d\n",multp,multiador,resultado);
        Tabla(multp,multiador+1,limit);
    }
    else
        return;
}

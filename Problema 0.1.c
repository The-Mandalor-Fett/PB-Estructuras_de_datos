#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
    int *u=NULL, *v=NULL, *w=NULL, *q=NULL;
    int a=101, c=301, b=201;
    u= &c; v= &b; w= &a;
    //printf("a= %X,b= %X,c= %X\n",&a,&b,&c);
    //printf("Ahora  w = %X \n*w = %d \n&w = %X  \n ",w,*w,&w);
    //printf("Ahora u = %X, y v = %X \n*u = %d y *v = %d \n&u = %X y &v = %X  \n ",u,v,*u,*v,&u,&v);
    (*w)+=a+b+c; //Realiza la suma del apuntador *w con a, b, c
    //printf("Tenemos que w = %d \n",*w);
    // como *w tiene la direccion de a entonces tiene lo que vive en esa direccion
    // entoces al momento de realizar la suma tambien se suma el valor que tiene *w
    // si le quitamos el asterisco tenemos la direccion de w que es 0
    (*u)++; //Se aumenta la cantidad que tiene *u en 1
    //printf("Tenemos que *u = %d \n",*u);
    //printf("Ahora c = %d \n",c); // el valor fue alterado gracias al apuntador por referencia
    (*v)*=4; // multiplica el valor de la direccion que apuanta v
    //printf("Tenemos que *v = %d \n",*v);
    q= w; w= u; u= v; v= q;
    //printf("a= %d \n",a);
    //printf("b= %d \n",b);
    //printf("c= %d \n",c);
    //printf("Ahora q = %X, y w = %X \n*q = %d y *w = %d \n&q = %X y &w = %X  \n ",q,w,*q,*w,&q,&w);
    //printf("Ahora u = %X, y v = %X \n*u = %d y *v = %d \n&u = %X y &v = %X  \n ",u,v,*u,*v,&u,&v);
    (*u)-=(*q)%5-a;
    //printf("a= %d \n",a);
    printf("*u= %d &u= %X, &v= %X\n",*u,u,v);
    //Ahora b tiene el resultado de *u ya que esta apuntando a su direccion
    (*v)-=(*q)%3-b;
    //*v esta apuntando a la direccion de a por lo que sobre escribe el resultado obtenido en esta operacion
    //printf("b= %d \n",b);
    //printf("*v= %d \n",*v);
    (*w)-=(*q)%2-c;
    //printf("*w= %d w= %X\n",*w,w);
    //printf("&c= %X\n",&c);
    //printf("a= %d, b= %d, c= %d\n",a,b,c);
    //*w esta apuntando a la direccion de c por lo que sobre escribe el resultado
    //free(u); free(v); free(w); free(q);
    //u=NULL; v=NULL; w=NULL; q=NULL; //El error o lo faltante
    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
    int **q= NULL, *p= NULL, k= 0, N= 10, c= 0;
    int *a= NULL,*b= NULL,*x= NULL,*y= NULL;
    a= (int *)malloc(N*sizeof(int));
    b= (int *)malloc(N*sizeof(int));
    for (x = a, y = b, k = 0; k < N; x++ ,y++ ,k++)
    {
        (*x)=2*k; //los valores de x,y se sobre escriben en a , b
        (*y)=3*k;
        printf("Iteracion [%d] :: Contenido de *x= %d, *a= %d, *y= %d , *b= %d\n",k ,*x, *a, *y, *b);      
        //printf("MEMORIA :: a= %X ,b= %X ,x= %X ,y= %X\n",a,b,x,y);
        //printf("\n");
        //a++; b++;
    }
    printf("\n");
    for ( k = 0; k < N; k++)
    {
        if (k%2==0)
            q= &a;
        else
            q= &b;
        //printf("a= %X , b= %X :: q1= %X, q2= %X \n",a,b,q,q);
        printf("ITERACION [%d]\n",k);
        p= *q;
        printf("p=*q = %d\n",*p);
        p+=k;
        printf("p+k= %X\n",p);
        (*p)*=-1;
        printf("p*(-1)= %d\n",*p);
        printf("**q= %d + *p= %d =",**q, *p);
        (**q)+= *p;
        printf("**Q= %d\n", **q);
        
    }
    

    system("pause");
    free (a); free(b);
    a=NULL;  b=NULL; 
    return 0;
}

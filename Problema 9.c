#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int k=0, x=0, i=0, j=0, N=0;
    //N=600;
    for ( k = 0, x= 0; k < N; k++)
    {
        x+=k;
    }
    printf("x= %d\n",x);
    printf("\nSegundo for\n");
    for ( k = 1, x= 0; k < N; k*=6)
    {
        x+=k;
    }
    printf("x= %d\n",x);
    printf("\nTercer for distinto valor N\n");
    for ( i = 0, x= 0; i < 9; i+=2)
        for ( j = 0; j < 9; j+=3)
        {
        x+=i*j;
        }
    printf("x= %d\n",x);
    printf("\nTercer for\n");
    for ( i = 0, x= 0; i < N; i+=2)
        for ( j = 0; j < N; j+=3)
        {
            x+=i*j;
           
        } 
    printf("x= %d\n",x);
    printf("\nCuarto for\n");
     for ( i = N; i > 0; i/=2)
        for ( j = N; j > 0; j--)
        {
            x+=i*j;
        }
        printf("x= %d\n",x);
        
    
    
    return 0;
}




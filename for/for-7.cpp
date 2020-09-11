//7. Ingresar 10 valores, indicar e imprimir cuántos son positivos, cuántos
//negativos y cuántos ceros

#include<stdio.h> 
//#include<iostream> esta libreria tira error
#include<stdlib.h>
#include<string.h>

int main()
{
    int num,positivo,negativo,cero,cant,con;
    positivo=0;
    negativo=0;
    cero=0;
    
    for(con=1;con<=10;con++)
    {
        printf("Introduzca un Numero:");
        scanf("%d",&num);
        if (num>0)
        {
            positivo+=+1;
        }
        else
        if(num<0)
        {
            negativo+=+1;
        }
        else
        cero+=+1;
    }

    printf("\n La Cantidad de Positivos Son: %d \n ",positivo);
    printf("\n La Cantidad de Negativos Son: %d \n ",negativo);
    printf("\n La Cantidad de Ceros Son: %d \n ",cero);

system("pause");    
return 0;
}

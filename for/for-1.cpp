// Ingresar 25 números, calcular su promedio e imprimirlo

#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()
{ 
	int cont,valor,promedio, suma;
    valor=0;
    system("cls");
    
    for(cont=1;cont<=25;cont++)
    	{
		printf("Ingrese un valor");
		scanf("%d",&valor);
    	suma=suma+valor;
    	promedio=suma/cont;
	    }

printf("el promedio de los numeros ingresados es de  %d\n", promedio );
system("pause");
	 } 

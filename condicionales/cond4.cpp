//4. Ingresar dos valores y realizar la resta del mayor menos el menor --IMPRIMIR

#include<conio.h> 
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()
{ 
	int valor1,valor2,resta1,resta2;
	
	
	 printf("Ingrese un valor");
	 scanf("%d",&valor1);
	 printf("Ingrese un valor");
	 scanf("%d",&valor2);
	 resta1=valor1-valor2;
	 resta2=valor2-valor1;
	 
	 if(valor1>valor2)	 
	 	{
	 		printf("La resta es: %d \n",resta1) ;
	 	}
	 
	 if(valor2>valor1)	 
	 	{
	 		printf("La resta es: %d  \n", resta2);
	 	}
	 
	 system("pause");
	 } 
	 

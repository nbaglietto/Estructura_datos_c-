//3. Ingresar dos valores y realizar e imprmir el producto si el 1ro es mayor al
// 2do, si son iguales solo indicarlo
//LE GREGUE QUE MUESTRE SI LOS VALORES SON IGUALES 
#include<conio.h> 
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()
{ 
	int valor1,valor2,producto;
	//float producto;
	
	 printf("Ingrese un valor");
	 scanf("%d",&valor1);
	 printf("Ingrese un valor");
	 scanf("%d",&valor2);
	 producto=valor1*valor2;
	 
	 if(valor1>valor2)	 
	 	{
	 		printf("El resultado es %d \n",producto) ;
	 	}
	 
	 if(valor1==valor2)	 
	 	{
	 		printf("Los Valores son iguales %d \n");
	 	}
	 
	 if(valor1<valor2)	 
	 	{
	 		printf("el valor1 es menor al valor2  \n");
	 	}
	 system("pause");
	 } 
	 



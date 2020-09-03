// ingresar un valor y decir si es positivo negativo o neutro
#include<conio.h> 
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()
{ 
	int valor;
	 
	 printf("Ingrese un valor");
	 scanf("%d",&valor);
	 
	 if(valor>0)	 
	 	{
	 		printf("el valor es positivo \n");
	 	}
	 
	 if(valor<0)	 
	 	{
	 		printf("el valor es negativo \n");
	 	}
	 
	 if(valor==0)	 
	 	{
	 		printf("el valor es cero \n");
	 	}
	 system("pause");
	 } 

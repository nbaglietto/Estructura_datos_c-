//16.Escribir un algoritmo que determine el precio total a pagar por una llamada
//telefónica, teniendo en cuenta que:
//a. Toda llamada que dure menos de tres minutos (10 pulsos) tiene un precio de 0.50 pesos.
//b. Y cada minuto adicional (a partir de los tres minutos iniciales) equivale a un pulso y tiene un precio de 0.10 pesos.
//c. Luego:
//d. Realizar el Diagrama de flujo
//e. Construir el Diagrama de Flujo/ seudocodigo
//f. Codificar el algoritmo en lenguaje C.

#include<conio.h> 
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()	
{ 
	int minutos;
	float basico=0.50, adicional=0.10,subtot;
	subtot=minutos*adicional+basico;
	
	
	printf("Ingrese duracion de la llamada en minutos ");
	scanf("%d",&minutos);
		 	 
	if(minutos<=3)
  		  {printf("El costo de la llamada es de 	: %0.2f", basico ); 
		  }
	if(minutos>3)
  		  {printf("El costo de la llamada es de 	: %0.2f", subtot ); 
		  }
	
	system("pause");
	 } 
	 

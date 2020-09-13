//11.Ingresar N valores, calcular e imprimir el promedio de positivos, de negativos y cantidad de ceros

#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>
#include<string.h>

int main ()
{ 
	int positivos=0,negativos=0,cero=0,total=0;
	float totneg=0;
	float totpos=0;
	float propos=0;
	float proneg=0;
	float cont=0;
	float valor=0;
	float cuantos=0;
	//char alumno[20];
	printf("Cuantos numeros ingresara? ");
	scanf("%f",&cuantos);
	
	
		if (cont!=cuantos)
		{	
			for(cont=0;cont<cuantos;cont++)  
		   	{
		   		
		   		printf("Ingresar valor? ");
				scanf("%f",&valor);
		   	    total++;
				
				if (valor >=0)
				{
				positivos++;
				totpos=totpos+valor;
				propos=totpos/positivos;
				}
			
				if (valor <0)
				{
				negativos++; //consigna 1
				totneg=totneg+valor;
				proneg=totneg/negativos;
				}
			
				if (valor ==0)
				{
				cero++; //consigna 1
				totneg=totneg/total;
				}
				
			}// FIN for	
		}// FIN if
		
		printf("el promedio de positivos es de %0.0f  \n" , propos );
		printf("el promedio de negativos es de %0.0f  \n" , proneg );
		printf("Cantidad de ceros es de  %d  \n  , cero );		

system("pause");
}

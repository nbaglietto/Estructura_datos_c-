 //5. Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es

#include<conio.h> 
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()
{ 
	int lado1,lado2,lado3;
	
	 printf("Ingrese lado1 del triangulo \n");
	 scanf("%d",&lado1);
	 printf("Ingrese lado2 del triangulo \n");
	 scanf("%d",&lado2);
	 printf("Ingrese lado3 del triangulo \n");
	 scanf("%d",&lado3);
	
	 
	if((lado1==lado2)&& (lado2==lado3)) 
  		   {printf("El triangulo es: EQUILATERO \n"); }
  	
			else
	{
	if((lado1!=lado2) && (lado2!=lado3) && (lado3!=lado1))
  			{ printf("El triangulo es ESCALENO \n"); }
	 		
	 		else
			{ printf("El triangulo es: ISOCELES \n"); } 
	    }
	 system("pause");
	 } 
	 //&& es el and o sea el y
	 // || es el or o sea el o exclusibo 

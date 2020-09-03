//5. Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es

#include<conio.h> 
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()
{ 
	int lado1,lado2,lado3;
	
	 printf("Ingrese lado1 del triangulo");
	 scanf("%d",&lado1);
	 printf("lado2 del triangulo");
	 scanf("%d",&lado2);
	 printf("lado3 del triangulo");
	 scanf("%d",&lado3);
	
	 
	if(lado1==lado2 && lado2==lado3)
  		  {printf("El triangulo es: EQUILATERO"); }
  	
	  if(lado1==lado2 && lado2!=lado3 || lado2==lado3 && lado3!=lado1 || lado3==lado1 && lado1!=lado2)
  		  { printf("El triangulo es: ISOCELES"); }
  	
	  if(lado1!=lado2 && lado2!=lado3 && lado3!=lado1)
  			{ printf("El triangulo es ESCALENO"); }
	 
	 system("pause");
	 } 
	 

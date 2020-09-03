//7. Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, indicar e cúal de esta sumas es mayor

#include<conio.h> 
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()
{ 
	int v1,v2,v3,v4,suma1,suma2;
	
	 printf("Ingrese valor1 ");
	 scanf("%d",&v1);
	 printf("Ingrese valor2");
	 scanf("%d",&v2);
	 printf("Ingrese valor3");
	 scanf("%d",&v3);
	 printf("Ingrese valor4");
	 scanf("%d",&v4);
	 suma1=v1+v2;
	 suma2=v3+v4;
	 
	if(suma1>suma2)
  		  {printf("la suma de los valores 1 y 2 es mayor \n a la suma de los valores 3 y 4 Resultado: %d", suma1 ); }
  	  
	if(suma1<suma2)
  		  {printf("la suma de los valores 3 y 4 es mayor \n a la suma de los valores 1 y 2 Resultado: %d", suma2 ); }  
	 
	 system("pause");
	 } 
	 

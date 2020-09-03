//11.Ingresar el sueldo, categoría y antigüedad de un empleado, calcular el
//sueldo final de cada uno de ellos, si empleado es de la categoria 1 se le
//adicionara $50 por cada año de antiguedad.

#include<conio.h> 
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()	
{ 
	int sueldo,categoria,antiguedad,total,premio=50;
	
	 printf("Ingrese valor Sueldo ");
	 scanf("%d",&sueldo);
	 printf("Ingrese categoria");
	 scanf("%d",&categoria);
	 printf("Ingrese antiguedad");
	 scanf("%d",&antiguedad);
	 total=antiguedad*premio;
	 
	 
	if(categoria==1)
  		  {printf("El sueldo del empleado \n es de: %d", total + sueldo ); 
		  }
	
	if(categoria!=1)
  		  {printf("El sueldo del empleado \n es de: %d", sueldo ); 
		  }
  	
	 system("pause");
	 } 
	 

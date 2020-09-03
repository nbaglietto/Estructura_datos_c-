//12.Sobre los datos del ejercico anterior imprimir los sueldos de los empleados
//con más de 5 años de antigüedad

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
	 
	 
	if(categoria==1 && antiguedad>=5)
  		  {printf("El sueldo del empleado \n es de: %d", total + sueldo ); 
		  }
	if(categoria!=1 && antiguedad>=5)
  		  {printf("El sueldo del empleado \n es de: %d", sueldo ); 
		  }
	
	
	system("pause");
	 } 
	 

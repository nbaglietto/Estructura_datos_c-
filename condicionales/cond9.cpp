//9. Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular
//su sueldo conociendo que recibe un premio de $ 100 si trabajo más de 50
//hs y si trabajo más de 150 hs le dan otros $ 100 adicionales.imprimir el
//sueldo

#include<conio.h> 
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()
{ 
	int vh,tt,premio1=100,premio2=200,sueldo;
	
	 printf("Ingrese valor de la hora ");
	 scanf("%d",&vh);
	 printf("Ingrese tiempo trabajado");
	 scanf("%d",&tt);
	 sueldo=vh*tt;
	 
	if(tt<50)
  		  {printf("El sueldo del empleado \n es de: %d", sueldo ); 
		  }
		 
	if(tt>=50 && tt<150)
  		  {printf("El sueldo del empleado \n es de: %d", sueldo+premio1 ); 
		  }
  	
	  if(tt>=150)
  		  {printf("El sueldo del empleado \n es de: %d", sueldo+premio2 ); 
		  } 
	 system("pause");
	 } 
	 

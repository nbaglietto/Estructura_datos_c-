//13.Ingresar las horas trabajadas por un empleado y su categoría, calcular su
//sueldo sabiendo que los empleados de la categoría 1 cobran $50, la 2
//cobra $ 70 y la 3 cobra $ 80.

#include<conio.h> 
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()	
{ 
	int ht,cat,cat1=50,cat2=70,cat3=80;
	
	 printf("Ingrese La cantidad de horas trabajadas ");
	 scanf("%d",&ht);
	 printf("Ingrese categoria");
	 scanf("%d",&cat);
	 //sueldo=antiguedad*premio;
	 
	 
	if(cat==1 )
  		  {printf("El sueldo del empleado \n es de: %d", ht*cat1 ); 
		  }
	if(cat==2 )
  		  {printf("El sueldo del empleado \n es de: %d", ht*cat2 ); 
		  }
	if(cat==3 )
  		  {printf("El sueldo del empleado \n es de: %d", ht*cat3 ); 
		  }
	
	system("pause");
	 } 
	 

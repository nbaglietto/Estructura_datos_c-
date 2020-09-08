// 2. Ingresar 20 notas y nombres de alumnos, indicar e imprimir los aplazados (
//menos de 4) y el nombre a quien pertenece esa nota

#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>
#include<string.h>

int main ()
{ 
  	int nota,aplazos,cont;
  	char alumno[20];        	
    
    for(cont=1;cont<=5;cont++)
    	{
    	printf("Ingrese Nombre del alumno \n");
		fflush(stdin);
	 	gets(alumno);
		printf("Ingrese Nota del alumno \n");
		scanf("%d",&nota);
		   	{   
			if(nota<=4)	 
 			printf("APLAZADO el alumno %s saco un %d\n",alumno, nota );
	 		}
		}
	system("pause");
}

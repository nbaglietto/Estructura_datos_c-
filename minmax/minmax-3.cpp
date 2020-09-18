//3. Ingresar los sueldos y nombres de 30 empleados, indicar e imprimir el
//sueldo mayor y a quién pertenece
#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

int main() 
{
			int cont=0;
			float smax=0,sdo=0;
			char nombre[20],aumax[20];        	
    
    for(cont=1;cont<=5;cont++)
    	{
		printf("Ingrese Nombre del empleado: \n");
		fflush(stdin);
	 	gets(nombre);
		printf("Ingrese sueldo del empleado: \n");
		scanf("%f",&sdo);
	   
	   			if (cont==1)	
						{
						smax=sdo;
						strcpy (aumax,nombre);
						}
				
					if (sdo>smax)
						{
						smax = sdo;
						strcpy (aumax,nombre);
						}
		}
			
	printf("\n\n\n");	
	printf(" El sueldo perteneciente a: %s \n es el maximo pagado por un monto de: %0.2f \n ",aumax,smax); 
	printf("\n\n\n");
		
system("pause");		
}

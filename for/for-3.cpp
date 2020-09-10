//3. Ingresar N sueldos e indicar su suma y su promedio, imprimir resultados

#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()
{ 
	int cont,cantsue, sdo=0,tsdo=0;
	printf("Cuantos sueldos ingresara? ");
	scanf("%d",&cantsue);
	
		if (cont!=cantsue);
		{	
			for(cont=0;cont<cantsue;cont++)  
		   	{
			printf("Ingrese Sueldo ");
			scanf("%d",&sdo);
			tsdo=tsdo+sdo;	
			}// FIN for	
		}// FIN if
		
		printf("El importe total de sueldos abonados es de: %d \n ",tsdo ); 
		printf("El promedio de sueldos abonados es de: %d \n ",tsdo/cantsue );

system("pause");
}

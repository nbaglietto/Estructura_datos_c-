/*
	se tienen los siguientes datos de los 5 empleados de la empresa, 
	Legajo, apellido, nombre, 3 categorias, y sueldo
	se desea saber:
	1-cantidad de empleados por categoria
	2- total de sueldos por categoria 
	3- apellido y nombre del empleado que cobre mas 
	4- que categoria cobra mas en total 
	5- valor del sueldo promedio por cada categoria 
*/


#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>
#include <string.h>
int main ()
{ 
	int con,legajo,cat;
    float sdo,max;
    char apynom[30],aux[30];
    int cantemp1,cantemp2,cantemp3;
    float totsdocat1,totsdocat2,totsdocat3;
    float promcat1,promcat3,promcat2;
    
    totsdocat1=totsdocat2=totsdocat3=0;
    for(con=1;con<=5;con++)
    	{
    		printf("ingrese legajo del empleado \n");
    		scanf("%d",& legajo);
    		printf("ingrese apellido y nombre del empleado \n");
    		fflush(stdin);
    		gets(apynom);
	  		printf("ingrese categoria del empleado \n");
    		scanf("%d",& cat);
    		printf("ingrese sueldo del empleado \n ");
    		scanf("%f",& sdo);
    		
    		switch(cat)
				{
					case 1:
							cantemp1=cantemp1+1; //consigna 1
							totsdocat1=totsdocat1+sdo; //consigna 2
							    		
    				case 2:
							cantemp2=cantemp2+1; //consigna 1
							totsdocat2=totsdocat2+sdo; //consigna 2
							    		
    				case 3:
							cantemp3=cantemp3+1; //consigna 1
							totsdocat3=totsdocat3+sdo; //consigna 2
							    		
    			} 	
    		if(con==1)
    			{
				max=sdo;
    			strcpy(aux,apynom);
				}
    		if (sdo>max)
    			{
    			max=sdo;
				strcpy(aux,apynom);	
				}
    	}// fin del for
		
		//calculo lo general e imprimo
		  printf("La  categoria 1 tiene %d empleados \n" , cantemp1 );
    	printf("La  categoria 2 tiene %d empleados \n" , cantemp2 );
    	printf("La  categoria 3 tiene %d empleados \n" , cantemp3 );
    	
    	printf("El total de sueldos de la categoria 1 es  %0.2f \n" , totsdocat1 );
    	printf("El total de sueldos de la categoria 2 es  %0.2f \n" , totsdocat2 );
    	printf("El total de sueldos de la categoria 3 es  %0.2f \n" , totsdocat3 );

		  printf("El empleado que mas cobro es %s \n" , aux );
		
		 promcat1=totsdocat1/cantemp1;
		 printf("el promedio de sueldos de cat 1 es %0.2f  \n" , promcat1 );
		 promcat2=totsdocat2/cantemp2;
		 printf("el promedio de sueldos de cat 2 es %0.2f  \n" , promcat2 );
		 promcat3=totsdocat3/cantemp3;
		 printf("el promedio de sueldos de cat 3 es %0.2f  \n" , promcat3 );
		
		if((totsdocat1>totsdocat2)&&(totsdocat1>totsdocat3))
			{
				printf("La categoria 1 es la que mas cobra \n"  );
			}
		if((totsdocat2>totsdocat2)&&(totsdocat2>totsdocat3))
			{
				printf("La categoria 2 es la que mas cobra \n"  );
			}
		if((totsdocat3>totsdocat1)&&(totsdocat3>totsdocat2))
			{
				printf("La categoria 3 es la que mas cobra \n"  );
			}	


  system("pause");
} 

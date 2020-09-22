/*
EJERCICIOS COMBINADOS
1. En una empresa los empleados cobran un sueldo según la categoria, son 50  empleados y 3 categorías
Categoría 1 = $ 1500
Categoría 2 = $ 2000
Categoría 3 = $ 2500
Al sueldo se le suman $ 100 por cada año trabajado.
Si se ingresa el nombre, categoría y antigüedad de cada empleado, calcular
A. Cuántos empleados hay por categoría
B. Total de sueldos pagados por categoría
C. Sueldo promedio general
D. Sueldo máximo y a quién pertenece
E. Qué porcentuel sobre el total de sueldos representa cada total de sueldos de las categorías
 
*/
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>
#include<string.h>

int main ()
{ 
	int c1=0,c2=0,c3=0,cont=0,categoria=0;
	float sueldo_max;
	char empleado[20];
	char aumax[20];
	float tot_cat1=0,tot_cat2=0,tot_cat3=0;
	float cat1=1500,cat2=2000,cat3=2500;
	float aux_antiguedad=0,antiguedad=0,prem_antig=100,adicional=0;
	float porcentage1,porcentage2,porcentage3;
	float sueldopromedio=0;
	float tot_general=0;
	float tot_cat=0;
	
	for(cont=1;cont<=4;cont++)
    	{
	     	
        printf("Ingrese el nombre del empleado: \n ");
    	fflush(stdin);
	 	gets(empleado);	
		printf("Ingrese la categoria del empleado: ");
    	scanf("%d",& categoria);
		printf("Ingrese antiguedad en años: ");
    	scanf("%f",& antiguedad);
		
				switch(categoria)
				{
					case 1:
							c1=c1+1; //cuento cantidad de empleados hay categoria 1
							if (antiguedad>=1)
							{		
								adicional=prem_antig*antiguedad; //multiplico los años trbajados por el premio de antiguedad
								tot_cat1=tot_cat1+adicional+cat1; //aca sumo el total del sueldo mas el premio
							}	
							else 
							{
							tot_cat1=tot_cat1+cat1;//sueldo pelado sin adicional por antiguedad
							}
							break;
					case 2:
							c2=c2+1;
							if (antiguedad>=1)
							{		
								adicional=prem_antig*antiguedad; //multiplico los años trbajados por el premio de antiguedad
								tot_cat2=tot_cat2+adicional+cat2; //aca sumo el total del sueldo mas el premio
							}	
							else 
							{
							tot_cat2=tot_cat2+cat2;//sueldo pelado sin adicional por antiguedad
							}
							break;
					case 3:
							c3=c3+1;
							if (antiguedad>=1)
							{		
								adicional=prem_antig*antiguedad; //multiplico los años trbajados por el premio de antiguedad
								tot_cat3=tot_cat3+adicional+cat3; //aca sumo el total del sueldo mas el premio
							}	
							else 
							{
							tot_cat3=tot_cat3+cat3;//sueldo pelado sin adicional por antiguedad
							}
							break;
    			} 
		
		} //fin for	
				tot_general=tot_general+tot_cat1+tot_cat2+tot_cat3;
				sueldopromedio=tot_general/cont;
				
				porcentage1=tot_cat1*100/tot_general;
				porcentage2=tot_cat2*100/tot_general;
				porcentage3=tot_cat3*100/tot_general;
    
				if (cont==1)	
					{
					sueldo_max=tot_general;
					strcpy (aumax,empleado);
					}
				if (tot_general>sueldo_max)
					{
					sueldo_max = tot_general;
					strcpy (aumax,empleado);
					}	 		
		
		printf("\n############################### RESPUESTA A #########################################\n  ");
		printf("La categoria 1 tiene %d de empleados \n" ,c1 );
		printf("  La categoria 2 tiene %d de empleados \n" ,c2 );
		printf("  La categoria 3 tiene %d de empleados \n" ,c3 );
		printf("\n############################### RESPUESTA B #########################################\n  ");
		printf("Se pagaron de la categoria 1 %0.2f   $ \n" , tot_cat1 );
		printf("  Se pagaron de la categoria 2 %0.2f $ \n" , tot_cat2 );
		printf("  Se pagaron de la categoria 3 %0.2f $ \n" , tot_cat3 );
		printf("\n############################### RESPUESTA C #########################################\n  ");
		printf("  El sueldo promedio es de: %0.2f \n" , sueldopromedio ); 
		printf("\n############################### RESPUESTA D #########################################\n  ");			
		printf("  El sueldo maximo es de : %0.2f $ y pertenece al empleado %s \n"  ,sueldo_max, aumax );	
		printf("\n############################### RESPUESTA E #########################################\n  ");       
		printf("La categoria 1 representa sobre el total pagado el %0.2f %% \n" ,porcentage1 );
		printf("  La categoria 2 representa sobre el total pagado el %0.2f %% \n" ,porcentage2 );
		printf("  La categoria 3 representa sobre el total pagado el %0.2f %% \n" ,porcentage3 );
		printf("\n################################# FIN ################################################\n ");					

system("pause");
}

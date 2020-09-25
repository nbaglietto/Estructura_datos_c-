/*
EJERCICIOS COMBINADOS
2. Una empresa conoce el nombre, sueldo y categoría de sus empleados, son 4 categorías, y la cantidad de empleados es variable N. Se desea saber
A. Cantidad de empleados por categoría 
B. Cantidad de empleados que cobran mas de $ 2000 
C. Cantidad de empleados de la categoría 1 con sueldo mayor a $ 1000 
D. Sueldo máximo y a qué empleado pertenece 
E. Sueldo mínimo y a que empleado pertenece 
F. Categoría con más empleados 
G. Porcentual en cantidad de empleados de cada categoría sobre el total de la empresa   
*/
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>
#include<string.h>

int main ()
{ 
	int c1=0,c2=0,c3=0,c4=0,cont=0,categoria=0,sdomayor,sdomayor1000,num=0;
	float sueldo_max=0,sueldo_min=0;
	char nombre[20];
	char auxmombre[20];
	float sdo=0,tot_general=0;
	float porcentage1,porcentage2,porcentage3,porcentage4;
	float tot_cat1=0,tot_cat2=0,tot_cat3=0,tot_cat4;
	
	printf("Cuantos empleados ingresara: ");
   	scanf("%d",& num);
		
	for(cont=0;cont<num;cont++)
    	{
	    printf("Ingrese el nombre del empleado: \n ");
    	fflush(stdin);
	 	gets(nombre);	
		printf("Ingrese la categoria del empleado: ");
    	scanf("%d",& categoria);
		printf("Ingrese el sueldo del empleado: ");
    	scanf("%f",& sdo);
		
		if (cont==1)	
					{
					sueldo_max=sdo;
					strcpy (auxmombre,nombre);
					sueldo_min=sdo;
					strcpy (auxmombre,nombre);
					}
				if (sdo>sueldo_max)
					{
					sueldo_max = sdo;
					strcpy (auxmombre,nombre);
					}	 	
				if (sdo<sueldo_min)
					{
					sueldo_min = sdo;
					strcpy (auxmombre,nombre);
					}		
		
		
		if (sdo>2000)
			{
				sdomayor=sdomayor+1;
			}
				switch(categoria)
				{
					case 1:
							c1=c1+1; //cuento cantidad de empleados hay categoria 1

							if (sdo>1000)
								{
									sdomayor1000=sdomayor1000+1;
								}
							tot_cat1=tot_cat1+sdo;	
							break;
					case 2:
							c2=c2+1;
							tot_cat2=tot_cat2+sdo;
							break;
					case 3:
							c3=c3+1;
							tot_cat3=tot_cat3+sdo;
							break;
					case 4:
							c4=c4+1;
								tot_cat4=tot_cat4+sdo;
							break;		
    			} 
		
		} //fin for	
		
				tot_general=tot_general+tot_cat1+tot_cat2+tot_cat3;
				
		if ((c1>c2)&&(c1>c3)&&(c1>c4))
	    	{
				printf("La categoria 1 es la que empleados tiene \n"  );
			}
		if ((c2>c1)&&(c2>c3)&&(c2>c4))
	    	{
				printf("La categoria 2 es la que empleados tiene \n"  );
			}	
		if ((c3>c2)&&(c3>c1)&&(c3>c4))
	    	{
				printf("La categoria 3 es la que empleados tiene \n"  );
			}	
		if ((c4>c1)&&(c4>c2)&&(c4>c3))
	    	{
				printf("La categoria 4 es la que empleados tiene \n"  );
			}			
		 		porcentage1=c1*100/cont;
				porcentage2=c2*100/cont;
				porcentage3=c3*100/cont;
				porcentage4=c4*100/cont;
    
				
		printf("\n############################### RESPUESTA A #########################################\n  ");
		printf("La categoria 1 tiene %d de empleados \n" ,c1 );
		printf("  La categoria 2 tiene %d de empleados \n" ,c2 );
		printf("  La categoria 3 tiene %d de empleados \n" ,c3 );
		printf("  La categoria 4 tiene %d de empleados \n" ,c4 );
		printf("\n############################### RESPUESTA B #########################################\n  ");
		printf("Se pagaron sueldos mayores de $2000 la cantidad de %d: \n" , sdomayor );
		printf("\n############################### RESPUESTA C #########################################\n  ");
		printf("En la categoria 1 Se pagaron sueldos mayores de $1000 la cantidad de:%d \n" , sdomayor1000 ); 
		printf("\n############################### RESPUESTA D #########################################\n  ");			
		printf("  El sueldo maximo es de : %0.2f $ y pertenece al empleado %s \n"  ,sueldo_max, auxmombre );	
		printf("\n############################### RESPUESTA E #########################################\n  ");       
		printf("  El sueldo minimo es de : %0.2f $ y pertenece al empleado %s \n"  ,sueldo_min, auxmombre );	
		printf("\n############################### RESPUESTA G #########################################\n  ");       
		printf("La categoria 1 representa %% %0.2f de el total de empleados \n" ,porcentage1 );
		printf("La categoria 2 representa %% %0.2f de el total de empleados \n" ,porcentage2 );
		printf("La categoria 3 representa %% %0.2f de el total de empleados \n" ,porcentage3 );
		printf("La categoria 4 representa %% %0.2f de el total de empleados \n" ,porcentage4 );
		printf("\n################################# FIN ################################################\n ");
system("pause");
}

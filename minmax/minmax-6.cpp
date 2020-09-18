//6. Ingresar el precio de N artículos, indicar e imprimir el más caro, el más
//barato, el precio promedio y la suma de todos los precios
#include<stdio.h> 
#include<stdlib.h>
#include<string.h>


int main() 
{
	int nart=0,cont=0,articulo=0;
	float promedio=0,vmax=0,vmin=0,total=0,vart=0;
	
	printf("Cuantas articulos ingresara?: \n");
	scanf("%d",&nart);
	
				for(cont=0;cont<nart;cont++)  
		   		{
					printf("Ingrese articulo ");
					scanf("%d",&articulo);
					//scanf("%d",&temperatura);
					printf("Ingrese valor articulo ");
					scanf("%f",&vart);
					total=total+vart;
	
					if (cont==1)	
						{
						vmax=vart;
						vmin=vart;
						}
					if (vart < vmin)
						{
						vmin=vart;	
						}
					else 
					{
						if (vart > vmax)
						{
						vmax = vart;
						}
					}
				
				}//fin for

			promedio=total/cont;
			
	printf("\n\n\n");	
	printf(" El articulo facturado de mayor valor cuesta: $ %0.2f 			\n ",vmax ); 
	printf("El articulo facturado de menor valor cuesta: $ %0.2f 	\n ",vmin );
	printf("El promedio de los valores facturados es: %0.2f 	 			\n ",promedio );
	printf("El total facturado es de: $ %0.2f 								\n ",total );
	printf("\n\n\n");
		
system("pause");
}

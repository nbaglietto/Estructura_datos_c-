//2. Ingresar temperaturas hasta una temperatura igual a 1000, indicar e
//imprmir la mayor y menor
#include<stdio.h> 
#include<stdlib.h>
#include<string.h>


int main() {
			int num=0,cont=0,tmin=0,tmax=0,temperatura=0;

				printf("Ingrese la Temperatura: ");
				scanf("%d",&temperatura);
			
				while (temperatura!=1000) 
		   		{
					
					cont=cont+1;
					if (cont==1)	
						{
						tmax=temperatura;
						tmin=temperatura;
						}
					if (temperatura < tmin)
						{
						tmin=temperatura;	
						}
					else {
					
					if (temperatura > tmax)
						{
						tmax = temperatura;
						}
					}
				printf("Ingrese la Temperatura ");
				scanf("%d",&temperatura);	
				}//fin for

	printf("\n\n\n");	
	printf(" La tempera maxima es de: %d \n ",tmax ); 
	printf("La tempera minima es de: %d \n ",tmin );
	printf("\n\n\n");
		
system("pause");
}

/*
5. En una carrera de autos se ingresan el número de auto y su tiempo,
indicar e imprimir cuál ganó y cúal fue el último
*/
#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

int main() {
			int cont=0,F1,auxf1_max=0,auxf1_min=0;
			float tiempo=0,tmin=0,tmax=0;

				printf("Ingrese el numero del auto: ");
				scanf("%d",&F1);
			
				while (F1!=0) 
		   		{
					printf("Ingrese el tiempo en llegar a la meta: ");
				    scanf("%f",&tiempo);
					cont=cont+1;
					if (cont==1)	
						{
						tmax=tiempo;
						auxf1_max=F1;
						tmin=tiempo;
						auxf1_min=F1;
						}
						
					if (tiempo < tmin)
						{
						tmin=tiempo;
						auxf1_min=F1;	
						}
						
					if (tiempo > tmax)
						{
						tmax = tiempo;
						auxf1_max=F1;
						}
					printf("Ingrese el numero del auto ");
				scanf("%d",&F1);	
				}//fin for

	printf("\n\n\n");
	printf("El ganador de la carrera es : %d con un tiempo de %0.2f \n ",auxf1_min,tmin );	
	printf("El ultimo competidor en llegar a la meta fue: %d con un tiempo de: %0.2f \n ",auxf1_max,tmax ); 
	
	printf("\n\n\n");
		
system("pause");
}

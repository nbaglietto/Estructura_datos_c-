//1. Ingresar N temperaturas , indicar e imprimir la máxima y mínima
#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

int main() {
	float i;
	int temperatura;
	int tmax=0;
	int tmin=0;
	int cont=0;
	int num=0;
	
	printf("Cuantas mediciones de Temperatura ingresara?: \n");
	scanf("%d",&num);
	

		if (cont!=num);
		{	
				for(cont=0;cont<num;cont++)  
		   		{
					printf("Ingrese la Temperatura ");
					scanf("%d",&temperatura);
		

					if (temperatura > tmax)
						{
						tmax = temperatura;
						}
					else 
						{
						if(temperatura< tmin)
						tmin = temperatura;							
						}
		
				}//fin for
		}//fin if contador
	
	
	printf("\n\n\n");	
	printf(" La tempera maxima es de: %d \n ",tmax ); 
	printf("La tempera minima es de: %d \n ",tmin );
	printf("\n\n\n");

system("pause");
}

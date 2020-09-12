//10.Ingresar la patente y monto de la multa de 50 autos, indicar e imprimir cuántos
//montos superan los $ 40 y del total cobrado que porcentaje representa la
//suma de los que superan los $40

#include<stdio.h> 
//#include<iostream> esta libreria tira error
#include<stdlib.h>
#include<string.h>

int main() {
	float i;
	int patente;
	int porcentage=0;
	int mmayor=0;
	float num=0;
	float total=0;
	float multa;
	float promedio=0;
	float cantmay;
	for (i=1;i<=3;i+=1) 
	
	{
		printf("Introduzca Patente:\n");
		scanf("%s",&patente);
		num=num+1;
		printf("Introduzca Valor multa:\n");
		scanf("%f",&multa);
		total=total+multa;
		    
			if (multa>40)
         	{ 
         	cantmay++;
         	mmayor=mmayor+multa;
         	}        
			
	}
    //printf("\n El total recaudado en multas es de; %0.2f \n",total);
    printf("\n Cantidad de multas superiores a $40  : %0.0f \n",cantmay);
    printf("\n El porcentage de multas mayores a $40 es de %0.2f % \n",mmayor*100/total);
	
	system("pause"); 
	return 0;
}

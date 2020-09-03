//8. Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor edad

#include<conio.h> 
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()
{ 
	int e1,e2;
	float a1,a2;
	
	 printf("Ingrese edad sujeto1 ");
	 scanf("%d",&e1);
	 printf("Ingrese altura sujeto1");
	 scanf("%f",&a1);
	 
	 printf("Ingrese edad sujeto2");
	 scanf("%d",&e2);
	 printf("Ingrese altura sujeto2");
	 scanf("%f",&a2);
	 
	 
	if(e1>e2)
  		  {printf("la altura del sujeto de mayor edad es de : %0.2f \n" , a1 ); 
			
		  }
  	  
    else
  		  {printf("la altura del sujeto de mayor edad es de : %0.2f \n ", a2 ); 
		  
		  }
	 
	 system("pause");
	 } 
	 

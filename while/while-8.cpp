//8. Ingresar valores hasta uno = 0, indicar e imprimir la cantidad de números
//ingresados y su promedio

#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

int main()
{
    int num=0,promedio=0,suma=0,i=0;
 
    printf("Introduzca un Numero :");
    scanf("%d",&num);
    
	while(num!=0) 
	
	{
	    i=i+1;
        suma=suma+num;
		promedio=suma/i;
		
	    printf("Introduzca un Numero :");
    	scanf("%d",&num);
      
    }//fin while

    printf("\n Cantidad de numeros ingresados: %d",i);
    printf("\n El promedio de la cantidad ingresada es de : %d \n \n" ,promedio);

    system("pause");
    return 0;
}
    

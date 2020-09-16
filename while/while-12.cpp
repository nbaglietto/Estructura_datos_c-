/*
12.Ingresar los datos de facturación de una empresa.
Número de factura 
Número de artículo
Cantidad vendida  
Precio unitario 
Los datos finalizan con numero de factura = 0, 
cada factura sólo tiene un número de artículo, existen tres artículos Se desea saber :
Valor de cada factura  
Facturación total 
Cuánto se vendio del artículo 1 en cantidad 
Cuántas facturas mayores de $ 3000 se hicieron  mayor3
Qué porcentaje representa el monto vendido por cada artículo sobre el total 
 
*/
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>
#include<string.h>

int main ()
{ 
	int nfac,nart,art1,art2,art3, porcentaje1,porcentaje2,porcentaje3;
	//int tvart1,tvart2,tvart3,vart2,vart3,cart2,cart3,i;
	float totfac1=0;
	float totfac2=0;
	float totfac3=0;
	float vart=0;
	int cart=0;
	int mayor3=0;
	float totalfac=0;
	int nfac1=0;
    int nfac2=0;
    int nfac3=0;
	float procentage1=0;
	float procentage2=0;
	float procentage3=0;
	printf("Ingresar numero de facura ");
	scanf("%d",&nfac);
	
	while(nfac!=0) 
	
	{
	   // i=i+1;
        	
        printf("Ingrese el numero de articulo \n ");
    	scanf("%d",& nart);	
				
				switch(nart)
				{
					case 1:
							printf("Ingrese Valor de articulo 1 ");
    						scanf("%f",& vart);
							printf("Ingrese cantidad de articulos vendido ");
    						scanf("%d",& cart);
							art1=cart; //cuento cantidad de articulos 1 vendidos
							totfac1=vart*cart; //consigo el total de pesos vendidos en art1 
							nfac1=nfac;
							if (totfac1>3000)
							{
								mayor3=mayor3+1;
											}
							break;					    		
    				case 2:
							printf("Ingrese Valor de articulo 2 ");
    						scanf("%f",& vart);
							printf("Ingrese cantidad de articulos vendido ");
    						scanf("%d",& cart);
							art2=cart; //cuento cantidad de articulos 1 vendidos
							totfac2=vart*cart; //consigo el total de pesos vendidos en art1 
							nfac2=nfac;
							if (totfac2>3000)
							{
								mayor3=mayor3+1;
											}
							break;						     		
    				case 3:
							printf("Ingrese Valor de articulo 3 ");
    						scanf("%f",& vart);
							printf("Ingrese cantidad de articulos vendido ");
    						scanf("%d",& cart);
							art3=cart; //cuento cantidad de articulos 1 vendidos
							totfac3=vart*cart; //consigo el total de pesos vendidos en art1 
							nfac3=nfac;
							if (totfac3>3000)
							{
								mayor3=mayor3+1;
											}
							break;					     		
    			} 		
		

	    printf("Ingresar numero de facura :");
    	scanf("%d",&nfac);
      
    }//fin while
	
				totalfac=totalfac+totfac1+totfac2+totfac3;
				procentage1=totfac1*100/totalfac;
				procentage2=totfac2*100/totalfac;
				procentage3=totfac3*100/totalfac;
				
		printf("\n Vendido en la factura N: %d $ %0.2f \n"      ,nfac1, totfac1 );	
		printf("   Vendido en la factura N: %d $ %0.2f  \n"     ,nfac2, totfac2 );
		printf("   Vendido en la factura N: %d $ %0.2f  \n \n"  ,nfac3, totfac3 );
		
		printf("El articulo 2 representa sobre el total vedido el %%: %0.2f \n" , procentage1 );
		printf("El articulo 2 representa sobre el total vedido el %%: %0.2f \n" , procentage2 );
		printf("El articulo 2 representa sobre el total vedido el %%: %0.2f \n \n" , procentage3 );
		
		
		printf("Se vendiron del articulo 1 la cantidad de  %d  \n" , art1 );
		printf("Cantidad de facturas mayores de $3000  %d  \n \n"  , mayor3 );		
		printf("Totalfacturado $ %0.2f  \n \n" , totalfac );	
		

system("pause");
}

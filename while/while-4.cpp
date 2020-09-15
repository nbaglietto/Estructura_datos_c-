//4. Ingresar facturas hasta nro de factura = 0, sumar sus importes y cúales y
//cuantas superan los $1000.imprimir los resultados

#include<stdio.h> 
//#include<iostream> esta libreria tira error
#include<stdlib.h>
#include<string.h>

int main() {
//	float cont;
//	float fmax;
//	float nf;
//	float tif;
	int vf,cont,fmax,nf,tip,tif;
	printf("Ingrese numero de factura \n");
	scanf("%d",& nf);
	cont = nf+1;
	
			while (nf!=0)
			{
				printf("Ingrese valor de factura \n");
				scanf("%d",&vf);
		     	tif = tif+vf;
				if (vf>1000) 
				fmax = fmax+1;
				
				printf("Ingrese numero de factura \n");
				scanf("%d",& nf);			
			}//fin while
				printf("El importe total de la Facturas es de: %d  \n",tif);
				printf("Facturas mayores a $1000 : %d  \n",fmax);
system("pause");	
return 0;
}

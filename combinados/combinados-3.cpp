/*
3. Una empresa desea procesar las ventas que efectúa conociendo los
siguientes datos:
número de factura NF
código de articulo CA
cantidad vendida CANT_V
precio unitario PRECIO_U
en cada factura sólo se vende un tipo de artículo, los artículos son 6 y los datos
finalizan con número de factura = 0
Se pide :
A. cantidad de facturas emitidas  Cant_FAC
B. monto de cada factura MONTO_FAC
C. suma de las facturas (caja diaria) SUMA_FAC
D. cantidad total de artículos vendidos CANT_TOT_ART_VEN
E. cantidad vendida de cada artículo CANT_ART_VEN
F. cantidad de facturas emitidas para cada artículo FAC_ART
G. promedio de importe de las facturas PROM_FAC
H. porcentual que representa el monto total de cada artículo sobre el total PORCENT_ART 
*/
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>
#include<string.h>

int main ()
{ 
	int NF=0,CA=0,CANT_V=0,Cant_FAC=0,CANT_TOT_ART_VEN=0,CANT_ART_VEN=0,PROM_FAC=0;
	int CANTFACART1=0,CANTFACART2=0,CANTFACART3=0,CANTFACART4=0,CANTFACART5=0,CANTFACART6=0;
	int CAVT=0,CAV=0,CAV1=0,CAV2=0,CAV3=0,CAV4=0,CAV5=0,CAV6=0; //cantidad de articulos vendidos
	float PRECIO_U=0,SUMA_FAC=0,FAC_ART=0;
	float MONTO_FAC1=0,MONTO_FAC2=0,MONTO_FAC3=0,MONTO_FAC4=0,MONTO_FAC5=0,MONTO_FAC6=0;
	float PORCENT_ART1=0,PORCENT_ART2=0,PORCENT_ART3=0,PORCENT_ART4=0,PORCENT_ART5=0,PORCENT_ART6=0;

			printf("Ingrese numero de factura: ");
    		scanf("%d",& NF);
			
	while (NF!=0) 
		   		{
	   	Cant_FAC=Cant_FAC+1;//A. cantidad de facturas emitidas
	   	
		printf("código de articulo : ");
    	scanf("%d",& CA);
		printf("Cantidad vendida  : ");
    	scanf("%d",& CANT_V);
		printf("Precio unitario : ");
    	scanf("%f",& PRECIO_U);
		
				switch(CA)
				{
					case 1:
							CAV1=CAV1+CANT_V; //E. cantidad vendida de cada artículo 
							MONTO_FAC1=CAV1*PRECIO_U;
							CANTFACART1=CANTFACART1+1;
							break;
					case 2:
							CAV2=CAV2+CANT_V; //E. cantidad vendida de cada artículo CANT_ART_VEN
							MONTO_FAC2=CAV2*PRECIO_U;
							CANTFACART2=CANTFACART2+1;
							break;
					case 3:
							CAV3=CAV3+CANT_V; //E. cantidad vendida de cada artículo CANT_ART_VEN
							MONTO_FAC3=CAV3*PRECIO_U;
							CANTFACART3=CANTFACART3+1;
							break;
    				case 4:
							CAV4=CAV4+CANT_V; //E. cantidad vendida de cada artículo CANT_ART_VEN
							MONTO_FAC4=CAV4*PRECIO_U;
							CANTFACART4=CANTFACART4+1;
							break;
					case 5:
							CAV5=CAV5+CANT_V; //E. cantidad vendida de cada artículo CANT_ART_VEN
							MONTO_FAC5=CAV5*PRECIO_U;
							CANTFACART5=CANTFACART5+1;
							break;
					case 6:
							CAV6=CAV6+CANT_V; //E. cantidad vendida de cada artículo CANT_ART_VEN
							MONTO_FAC6=CAV6*PRECIO_U;
							CANTFACART6=CANTFACART6+1;
							break;				
				} 
		
			printf("Ingrese numero de factura: ");
    		scanf("%d",& NF);
		
		} //fin for	
				SUMA_FAC=SUMA_FAC+MONTO_FAC1+MONTO_FAC2+MONTO_FAC3+MONTO_FAC4+MONTO_FAC5+MONTO_FAC6; //suma de las facturas (caja diaria)
				
				CANT_TOT_ART_VEN=CANT_TOT_ART_VEN+CAV1+CAV2+CAV3+CAV4+CAV5+CAV6;

				PROM_FAC=SUMA_FAC/Cant_FAC;
				
				PORCENT_ART1=MONTO_FAC1*100/SUMA_FAC;
				PORCENT_ART2=MONTO_FAC2*100/SUMA_FAC;
				PORCENT_ART3=MONTO_FAC3*100/SUMA_FAC;
				PORCENT_ART4=MONTO_FAC4*100/SUMA_FAC;
				PORCENT_ART5=MONTO_FAC5*100/SUMA_FAC;
				PORCENT_ART6=MONTO_FAC6*100/SUMA_FAC;
				
		printf("\n############################### RESPUESTA A #########################################\n  ");
		//A. cantidad de facturas emitidas  Cant_FAC
		printf("Cantidad de facturas emitidas  %d \n" ,Cant_FAC );
		printf("\n############################### RESPUESTA B #########################################\n  ");
		//B. monto de cada factura MONTO_FAC
		printf("Cantidad vendida articulo 1 %d \n" ,MONTO_FAC1 );
		printf("Cantidad vendida articulo 2 %d \n" ,MONTO_FAC2 );
		printf("Cantidad vendida articulo 3 %d \n" ,MONTO_FAC3 );
		printf("Cantidad vendida articulo 4 %d \n" ,MONTO_FAC4 );
		printf("Cantidad vendida articulo 5 %d \n" ,MONTO_FAC5 );
		printf("Cantidad vendida articulo 6 %d \n" ,MONTO_FAC6 );
		printf("\n############################### RESPUESTA C #########################################\n  ");
 		//C. suma de las facturas (caja diaria) SUMA_FAC
		printf("  suma de las facturas (caja diaria): %0.2f \n" ,  SUMA_FAC ); 
		printf("\n############################### RESPUESTA D #########################################\n  ");			
		//D. cantidad total de artículos vendidos CANT_TOT_ART_VEN
		printf("  Cantidad total de artículos vendidos: %d \n"  ,CANT_TOT_ART_VEN );	
		printf("\n############################### RESPUESTA E #########################################\n  ");       
		//E. cantidad vendida de cada artículo CANT_ART_VEN
		printf("Cantidad vendida articulo 1 %d \n" ,CAV1 );
		printf("Cantidad vendida articulo 2 %d \n" ,CAV2 );
		printf("Cantidad vendida articulo 3 %d \n" ,CAV3 );
		printf("Cantidad vendida articulo 4 %d \n" ,CAV4 );
		printf("Cantidad vendida articulo 5 %d \n" ,CAV5 );
		printf("Cantidad vendida articulo 6 %d \n" ,CAV6 );
		printf("\n############################### RESPUESTA F #########################################\n  ");    
		//F. cantidad de facturas emitidas para cada artículo FAC_ART
		printf("Cantidad de facturas emitidas para el esticulo 1 es de %d \n" ,CANTFACART1 );
		printf("Cantidad de facturas emitidas para el esticulo 2 es de %d \n" ,CANTFACART2 );
		printf("Cantidad de facturas emitidas para el esticulo 3 es de %d \n" ,CANTFACART3 );
		printf("Cantidad de facturas emitidas para el esticulo 4 es de %d \n" ,CANTFACART4 );
		printf("Cantidad de facturas emitidas para el esticulo 5 es de %d \n" ,CANTFACART5 );
		printf("Cantidad de facturas emitidas para el esticulo 6 es de %d \n" ,CANTFACART6 );
		printf("\n############################### RESPUESTA G #########################################\n  "); 
		//G. promedio de importe de las facturas PROM_FAC
		printf("  El promedio de importe de las facturas es de: %d \n" ,PROM_FAC );
		printf("\n############################### RESPUESTA H #########################################\n  "); 
		//H. porcentual que representa el monto total de cada artículo sobre el total PORCENT_ART 		
		printf("Porcentual que representa el monto total de el artículo 1 sobre el total %0.2f %% \n" ,PORCENT_ART1  );
		printf("Porcentual que representa el monto total de el artículo 2 sobre el total %0.2f %% \n" ,PORCENT_ART2  );
		printf("Porcentual que representa el monto total de el artículo 3 sobre el total %0.2f %% \n" ,PORCENT_ART3  );
		printf("Porcentual que representa el monto total de el artículo 4 sobre el total %0.2f %% \n" ,PORCENT_ART4  );
		printf("Porcentual que representa el monto total de el artículo 5 sobre el total %0.2f %% \n" ,PORCENT_ART5  );
		printf("Porcentual que representa el monto total de el artículo 6 sobre el total %0.2f %% \n" ,PORCENT_ART6  );
		printf("\n################################# FIN ################################################\n ");					

system("pause");
}

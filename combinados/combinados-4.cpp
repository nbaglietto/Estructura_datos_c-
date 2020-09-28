	/*
	4. Una companía aérea vende boletos en 3 aeropuertos mediante 6
empleados, cada vez que realiza una venta tiene los siguientes datos:
número de aeropuerto
número de empleado
valor del pasaje
cantidad de pasajes
 los datos finalizan con número de empleado = 99, Se desea saber
A. cantidad de pasajes vendidos por aeropuerto
B. cantidad de pasajes vendidos por cada empleado
C. monto total vendido por empleado
D. boleto de mayor valor
E. porcentual que representa lo vendido por cada aeropuerto en dinero
sobre el total
F. cantidad de ventas que excedieron los $ 1000
G. si cada boleto ya tiene incorporado el 10,5% de iva sobre el valor del
boleto,  cuánto hay que pagarle al fisco
H. si sobre el total hay que pagar el 3% de ingresos brutos, cuál es ese monto
	*/
	#include<stdio.h> 
	#include<iostream> 
	#include<stdlib.h>
	#include<string.h>
	
	int main ()
	{ 
		int emp,cont,aeropuerto,contador=0,cantidaddp=0,e1=0,e2=0,e3=0,e4=0,e5=0,e6=0;
		int aero1cp=0,aero2cp=0,aero3cp=0,e1cp=0,e2cp=0,e3cp=0,e4cp=0,e5cp=0,e6cp=0;
		float porcentage1=0,porcentage2=0,porcentage3=0,valor_max=0,e1mt=0,e2mt=0,e3mt=0,e4mt=0,e5mt=0,e6mt=0;
		float iva=10.5, ingresosbrutos=3,totalvendido,p_iva,p_ingresosbrutos,valorp,importe,importe1,importe2,importe3;
				
		printf("Numero de empleado?: ");
	   	scanf("%d",& emp); // 
	   	
		while(emp!=99)		
	    {
	    	cont=cont+1;	
		    printf("Numero de aeropuerto?: \n ");
	    	scanf("%d",&aeropuerto);	
			printf("Valor del pasaje?: ");
	    	scanf("%f",&valorp);
			printf("Cantidad de pasajes?: ");
	    	scanf("%d",&cantidaddp);
	    	importe=cantidaddp*valorp;
			
			if(importe>1000) //F. cantidad de ventas que excedieron los $ 1000
         	{
         		contador++;
			}
			
//			if (cont==1)	//D. boleto de mayor valor error, esto calcula venta de mayor valor
//						{
//						valor_max=importe;
//						}
//					if (importe>valor_max)
//						{
//						valor_max = importe;
//						}
						
			if (cont==1)	//D. boleto de mayor valor
			{
				valor_max=valorp;
			}
			if (valorp>valor_max)
			{
				valor_max = valorp;
			}							
			switch(emp)
			{
				case 1:
					e1=e1+1; 
					e1mt=e1mt+importe;	// total $ de pasajes vendidos empleado 1 
					e1cp=e1cp+cantidaddp; //cantidad de pasajes vendidos empleado1
					break;
				case 2:
					e2=e2+1; //cuento cantidad de empleados hay categoria 1
					e2mt=e2mt+importe;	
					e2cp=e2cp+cantidaddp;
					break;	
				case 3:
					e3=e3+1; //cuento cantidad de empleados hay categoria 1
					e3mt=e3mt+importe;	
					e3cp=e3cp+cantidaddp;
					break;
				case 4:
					e4=e4+1; //cuento cantidad de empleados hay categoria 1
					e4mt=e4mt+importe;	
					e4cp=e4cp+cantidaddp;
					break;
				case 5:
					e5=e5+1; //cuento cantidad de empleados hay categoria 1
					e5mt=e5mt+importe;	
					e5cp=e5cp+cantidaddp;
					break;
				case 6:
					e6=e6+1; //cuento cantidad de empleados hay categoria 1
					e6mt=e6mt+importe;	
					e6cp=e6cp+cantidaddp;
					break;
							
			} 
			switch(aeropuerto)
			{
				case 1:
					aero1cp=aero1cp+cantidaddp; //A. cantidad de pasajes vendidos por aeropuerto
					importe1=importe1+importe; //total valor pasages vendido aeropuerto x 
					break;
				case 2:
					aero2cp=aero2cp+cantidaddp;
					importe2=importe2+importe;
					break;
				case 3:
					aero3cp=aero3cp+cantidaddp;
					importe3=importe3+importe;
					break;
			}
						
			printf("Numero de empleado?: ");
	   		scanf("%d",& emp);	
		} //fin for	
			
			
		totalvendido=totalvendido+importe1+importe2+importe3; //total vendido x todos
		p_iva=(iva*totalvendido)/100; 
		p_ingresosbrutos=(ingresosbrutos*totalvendido)/100;		
		
		porcentage1=(importe1*100)/totalvendido; //% que representa lo vendido por cada aeropuerto en dinero sobre el total
		porcentage2=(importe2*100)/totalvendido;
		porcentage3=(importe3*100)/totalvendido;
				
		printf("\n############################### RESPUESTA A #########################################\n  ");
		//A. cantidad de pasajes vendidos por aeropuerto
		printf("Cantidad de pasajes vendidos por aeropuerto numero 1: %d \n" ,aero1cp );
		printf("Cantidad de pasajes vendidos por aeropuerto numero 2: %d \n" ,aero2cp );
		printf("Cantidad de pasajes vendidos por aeropuerto numero 3: %d \n" ,aero3cp );
		printf("\n############################### RESPUESTA B #########################################\n  ");
		//B. cantidad de pasajes vendidos por cada empleado
		printf("Cantidad de pasajes vendidos por empleado 1: %d \n" ,e1cp );
		printf("Cantidad de pasajes vendidos por empleado 2: %d \n" ,e2cp );
		printf("Cantidad de pasajes vendidos por empleado 3: %d \n" ,e3cp );
		printf("Cantidad de pasajes vendidos por empleado 4: %d \n" ,e4cp );
		printf("Cantidad de pasajes vendidos por empleado 5: %d \n" ,e5cp );
		printf("Cantidad de pasajes vendidos por empleado 6: %d \n" ,e6cp );
		printf("\n############################### RESPUESTA C #########################################\n  ");
		//C. monto total vendido por empleado
		printf("Total facturado por empleado: %0.2f \n" ,e1mt ); 
		printf("Total facturado por empleado: %0.2f \n" ,e2mt );
		printf("Total facturado por empleado: %0.2f \n" ,e3mt );
		printf("Total facturado por empleado: %0.2f \n" ,e4mt );
		printf("Total facturado por empleado: %0.2f \n" ,e5mt );
		printf("Total facturado por empleado: %0.2f \n" ,e6mt );
		printf("\n############################### RESPUESTA D #########################################\n  ");			
		printf("  El boleto de mayor valores de : %0.2f $ \n"  ,valor_max );	
		printf("\n############################### RESPUESTA E #########################################\n  ");       
		printf("El aeropuerto 1 representa %% %0.2f de el total de ventas \n" ,porcentage1 );
		printf("El aeropuerto 2 representa %% %0.2f de el total de ventas \n" ,porcentage2 );
		printf("El aeropuerto 3 representa %% %0.2f de el total de ventas \n" ,porcentage3 );	
		printf("\n############################### RESPUESTA G #########################################\n  ");       
		printf("Pago de iva sobre el total facturado:%0.2f  \n" ,p_iva );
		printf("Pago de Ingresos Brutos sobre el total facturado:%0.2f \n" ,p_ingresosbrutos );
		printf("\n################################# FIN ################################################\n ");
		
		system("pause");
	}

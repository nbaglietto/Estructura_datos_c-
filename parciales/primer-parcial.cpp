/*
Una receptoría de avisos para los diferentes diarios de la ciudad desea tener un mayor control de su negocio
Cada vez que realiza una transacción recopila los siguientes datos que finalizaran con nro. de transacción igual a 0
Nro. de transacción
Diario donde publicara	(1 a 5)
Día de la semana 		(1 a 7)
Rubro					(1 a 3)
Tamaño			        (1 a 4)

Si el tamaño es 1 vale $200, si es 2 vale $300, si es 3 vale $400 y si es 1 vale $100.
Si la publicación es el día 1 o 7 (fin de semana) cuesta un 40 y 50% más respectivamente
La agencia desea conocer
1.	Cantidad de avisos publicados por día
2.	Recaudación de cada diario
3.	Rubro menos utilizado en total
4.	Valor promedio de las publicaciones en cada rubro
5.	Porcentaje que representa la cantidad de avisos de cada dia sobre el total
6.	Que transacción fue la de mayor monto, a que diario, día y rubro corresponde
*/
	#include<stdio.h> 
	#include<iostream> 
	#include<stdlib.h>
	#include<string.h>
	
	int main ()
	{ 
		int dia=0,medida=0,diario=0,transaccion=0,cont=0,cont_dia1=0,cont_dia2=0,cont_dia3=0,cont_dia4=0,cont_dia5=0,cont_dia6=0,cont_dia7=0;
		int valor_max=0,dia_max=0,diario_max=0,rubro_max=0,cont_rubro1=0,cont_rubro2=0,cont_rubro3=0;
		
		int cont_diario1=0,cont_diario2=0,cont_diario3=0,cont_diario4=0,cont_diario5=0;
		int rubro=0,total_rubros,cont_rubro1_td1=0,cont_rubro2_td1=0,cont_rubro3_td1=0;
		
		float precio=0,precio_dia1=0,precio_dia2=0,precio_dia3=0,precio_dia4=0,precio_dia5=0,precio_dia6=0,precio_dia7=0,total_diarios=0;
		float diario1_total=0,diario2_total=0,diario3_total=0,diario4_total=0,diario5_total=0,diario6_total=0,diario7_total=0;
		float porcentaje1=0,porcentaje2=0,porcentaje3=0,porcentaje4=0,porcentaje5=0,porcentaje6=0,porcentaje7=0;
		float precio1=0,precio7=0,rubro1_total=0,rubro2_total=0,rubro3_total=0,promedio1,promedio2=0,promedio3=0;
		float precio_diario_d1=0,precio_diario_d2=0,precio_diario_d3=0,precio_diario_d4=0,precio_diario_d5=0,precio_diario_d6=0,precio_diario_d7=0;
		float suma_r1=0,suma_r2=0,suma_r3=0;
		
		printf("Numero de transaccion?: ");
	   	scanf("%d",& transaccion); 
	   	
		while(transaccion!=0)		
	    {
	    	cont=cont+1; 			//inicio contador de avisos 	
	    	printf("En que diario quiere publicar?: \n ");
	    	scanf("%d",&diario);	
			printf("Que dia se publicara?: ");
	    	scanf("%d",&dia);
	    	printf("En que rubro lo publicara?: ");
	    	scanf("%d",&rubro);
	    	printf("Que medidas tendra el aviso?: ");
	    	scanf("%d",&medida);
	    	
	    	switch(medida)
				{
					case 1:
						precio=200;	// Si el tamaño es 1 vale $200, si es 2 vale $300, si es 3 vale $400 y si es 4 vale $100.
						break;
					case 2:
						precio=300;	
						break;	
					case 3:
						precio=400;	
						break;
					case 4:
						precio=100;	
						break;			
				}
			switch(dia)
				{
					case 1:
						cont_dia1=cont_dia1+1;      		// 1.	Cantidad de avisos publicados por día
						precio=(40*precio)/100+precio;		//al total precio le agrego el porcentaje q corresponde por fin de semana
						precio_dia1=precio_dia1+precio;		//total precio x dia
						break;
					case 2:
						cont_dia2=cont_dia2+1;
						precio_dia2=precio_dia2+precio;	 
						break;	
					case 3:
						cont_dia3=cont_dia3+1;
						precio_dia3=precio_dia3+precio;	 
						break;
					case 4:
						cont_dia4=cont_dia4+1;	 
						precio_dia4=precio_dia4+precio;
						break;		
					case 5:
						cont_dia5=cont_dia5+1;	 
						precio_dia5=precio_dia5+precio;
						break;
					case 6:
						cont_dia6=cont_dia6+1;	 
						precio_dia6=precio_dia6+precio;
						break;
					case 7:
						cont_dia7=cont_dia7+1;	 
						precio=(50*precio)/100+precio;
						precio_dia7=precio_dia7+precio;
						break;								
				}
			switch(diario)
				{
				
					case 1:
						cont_diario1=cont_diario1+1;
						diario1_total=diario1_total+precio;			//2. Recaudación de cada diario
						break; 
					case 2:
						cont_diario2=cont_diario2+1;
						diario2_total=diario2_total+precio;	
						break;
					case 3:
						cont_diario3=cont_diario3+1;
						diario3_total=diario3_total+precio;
						break;
					case 4:
						cont_diario4=cont_diario4+1;
						diario4_total=diario4_total+precio;
						break;
					case 5:
						cont_diario5=cont_diario5+1;
						diario5_total=diario5_total+precio;
						break;
				} 
			switch(rubro)
			{
				case 1:
					cont_rubro1=cont_rubro1+1;			// 3.Rubro menos utilizado en total, cuento la cantidad de rubro
					rubro1_total=rubro1_total+precio;
					break;
				case 2:
					cont_rubro2=cont_rubro2+1;	
					rubro2_total=rubro2_total+precio;
					break;
				case 3:
					cont_rubro3=cont_rubro3+1;
					rubro3_total=rubro3_total+precio;
					break;		
			}
			//6.	Que transacción fue la de mayor monto, a que diario, día y rubro corresponde
			if (cont==1)	
				{
				valor_max=precio;
				}
			if (precio>valor_max)
				{
				valor_max=precio;
				dia_max=dia;
				diario_max=diario;
				rubro_max=rubro;
				}
				
			printf("Numero de transaccion?: ");
	   		scanf("%d",& transaccion); 	
		} //fin while	
		
		//4.	Valor promedio de las publicaciones en cada rubro
	   	promedio1=rubro1_total/cont_rubro1; 
		promedio2=rubro2_total/cont_rubro2;
		promedio3=rubro3_total/cont_rubro3;
		//5.	Porcentaje que representa la cantidad de avisos de cada dia sobre el total		
		porcentaje1=(cont_dia1*100)/cont;  
		porcentaje2=(cont_dia2*100)/cont;
		porcentaje3=(cont_dia3*100)/cont;
		porcentaje4=(cont_dia4*100)/cont;
		porcentaje5=(cont_dia5*100)/cont;
		porcentaje6=(cont_dia6*100)/cont;
		porcentaje7=(cont_dia7*100)/cont;
		
		printf("\n############################### RESPUESTA 1 ###################################################\n  ");
		//1.	Cantidad de avisos publicados por día
		printf("	Cantidad de avisos publicados el dia domingo: 		%d \n",cont_dia1 );
		printf("	Cantidad de avisos publicados el dia lunes: 		%d \n",cont_dia2 );
		printf("	Cantidad de avisos publicados el dia martes: 		%d \n",cont_dia3 );
		printf("	Cantidad de avisos publicados el dia miercoles: 	%d \n",cont_dia4 );
		printf("	Cantidad de avisos publicados el dia jueves: 		%d \n",cont_dia5 );
		printf("	Cantidad de avisos publicados el dia viernes: 		%d \n",cont_dia6 );
		printf("	Cantidad de avisos publicados el dia sabado: 		%d \n",cont_dia7 );
		printf("\n############################### RESPUESTA 2 ###################################################\n  ");
		// 2.	Recaudación de cada diario	
		printf("	Recaudacion del diario 1:  	%0.2f \n" ,diario1_total );
		printf("	Recaudacion del diario 2:  	%0.2f \n" ,diario2_total );
		printf("	Recaudacion del diario 3:  	%0.2f \n" ,diario3_total );
		printf("	Recaudacion del diario 4:  	%0.2f \n" ,diario4_total );
		printf("	Recaudacion del diario 5:  	%0.2f \n" ,diario5_total );
		printf("\n############################### RESPUESTA 3 ###################################################\n  ");
		//3.	Rubro menos utilizado en total 
		if ((cont_rubro1<cont_rubro2)&&(cont_rubro1<cont_rubro3))
		{
			printf("El rubro 1 es el menos utilizado \n" );
		}
		if ((cont_rubro2<cont_rubro1)&&(cont_rubro2<cont_rubro3))
		{
			printf("El rubro 2 es el menos utilizado \n" );
		}
		if ((cont_rubro3<cont_rubro1)&&(cont_rubro3<cont_rubro2))
		{
			printf("El rubro 3 es el menos utilizado \n" );
		}
		printf("\n############################### RESPUESTA 4 ###################################################\n  ");			
		// 4.	Valor promedio de las publicaciones en cada rubro
		printf("	Valor promedio de las publicaciones en rubro 1: 	%0.2f \n",promedio1 );
		printf("	Valor promedio de las publicaciones en rubro 2: 	%0.2f \n",promedio2 );
		printf("	Valor promedio de las publicaciones en rubro 3: 	%0.2f \n",promedio3 );
		printf("\n############################### RESPUESTA 5 ###################################################\n  ");       
		//5.	Porcentaje que representa la cantidad de avisos de cada dia sobre el total
		printf(	"	Porcentaje que representa la cantidad de avisos del dia domingo es:		%0.2f %% \n",porcentaje1 );
		printf(	"	Porcentaje que representa la cantidad de avisos del dia lunes es:		%0.2f %% \n",porcentaje2 );
		printf(	"	Porcentaje que representa la cantidad de avisos del dia martes es:		%0.2f %% \n",porcentaje3 );
		printf(	"	Porcentaje que representa la cantidad de avisos del dia miercoles es:		%0.2f %% \n",porcentaje4 );
		printf(	"	Porcentaje que representa la cantidad de avisos del dia jueves es:		%0.2f %% \n",porcentaje5 );
		printf(	"	Porcentaje que representa la cantidad de avisos del dia viernes es:		%0.2f %% \n",porcentaje6 );
		printf(	"	Porcentaje que representa la cantidad de avisos del dia sabado es:		%0.2f %% \n",porcentaje7 );
		printf("\n############################### RESPUESTA 6 ###################################################\n  "); 
		//6.	Que transacción fue la de mayor monto, a que diario, día y rubro corresponde
		printf("	La transaccion de mayor monto, la realizo el diario: %d  \n" ,diario_max);
		printf("	el dia: %d y corresponde al rubro: %d \n" ,dia_max, rubro_max );		
		printf("\n################################# FIN #########################################################\n ");
				
		system("pause");
	}


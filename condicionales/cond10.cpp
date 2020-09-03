 //10.Ingresar tres valores correspondientes al día, mes y año de una fecha,
// indicar si es válida, considerar los años bisiestos
#include<conio.h> 
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()
{ 
	int year,mes,dia;
	 printf("Ingrese el dia \n");
	 scanf("%d",&dia);
	 printf("Ingrese el mes \n");
	 scanf("%d",&mes);
	 printf("Ingrese el año \n");
	 scanf("%d",&year);
	
	//esta rutina ma da si es bisiesto
	
	if (mes==2)
		{
				if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
			{ 
	
	 
			if(dia<30) 
  		    	{
			 		printf("Fecha correcta"" \n"); 
				}
  	
				else
	        	{
	          		printf("Fecha Incorrecta \n"); 
				}
	 		
	 		}	
	 	}	
	
	if ((mes==4) || (mes==6)|| (mes==9)|| (mes==11)) 
  		{	
  				if(dia==30)
				{
			 		printf("Fecha correcta"" \n"); 
				}
  	
				else
	        	{
	          		printf("Fecha Incorrecta \n"); 
				} 
				

				 
		}	
	if ((mes==1) || (mes==3)|| (mes==5)|| (mes==7) || (mes==8) || (mes==10) || (mes==12)) 
  		{	
  				if(dia==31)
				{
			 		printf("Fecha correcta"" \n"); 
				}
  	
				else
	        	{
	          		printf("Fecha Incorrecta \n"); 
				} 
				 
		}		
	    system("pause");
	     
}	
		
//Meses con 30 días: Abril, Junio, Septiembre y Noviembre.
//Meses con 31 días: Enero, Marzo, Mayo, Julio, Agosto, Octubre y Diciembre.
//Meses con 28 días: Febrero (Menos cuando es bisiesto que tiene 29 días).	    
	    
	    

	 //&& es el and o sea el y
	 // || es el or o sea el o exclusibo 

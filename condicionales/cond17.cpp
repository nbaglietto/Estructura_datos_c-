//17.Dadas las siguientes expresiones lógicas en lenguaje C evaluar si su
//resultado es VERDADERO o FALSO:
//a. x =7 y = 5 z = 3
//b. (x>y) && (z==3)
//c. (x<z) || z>5 || y>1
//d. ((x <y) && !(y>x)) || (z>2)
//e. ((x <z) || (y>x)) || !(z>2)

#include<conio.h> 
#include<stdio.h> 
#include<iostream> 
#include<stdlib.h>

int main ()	
{ 
	int x=7,y=5,z=3;
	 
	if(x>y && z==3)
  		  { 
		   printf(" esta condicion (x>y && z==3) es verdadera" ); 
		  }		
			 	 
				else
					{
					printf(" esta condicion (x>y && z==3) es falsa" ); 		 
		  			} 
	system("pause");	  
	
	if(x<z || z>5 || y>1)
  		  { 
		  printf(" esta condicion (x<z || z>5 || y>1) es falsa" ); 
		  }
		  		else
		            {
					printf(" esta condicion (x<z || z>5 || y>1) es verdadera" );
		            }
	system("pause");
	
	if(x <y && !y>x || z>2)
  		  { printf(" esta condicion (x <y && !y>x || z>2) es falsa" ); 
		  }
		  		else
		  			{ 
		  			printf(" esta condicion (x <y && !y>x || z>2) es verdadera" );
		  			}	  
	system("pause");
		
	if(x<z || y>x|| !z>2)
  		  { printf(" esta condicion (x <z || y>x || !z>2) es falsa" ); 
		  }
		  		else
		  			{ 
		  			printf(" esta condicion (x <z || y>x || !z>2) es verdadera" );
		  	 	    }	  
	system("pause");	  
	 } 	  

//9. Ingresar nombres y notas de alumnos teniendo en cuenta que la carga finaliza
//con nota = 11, calcular e imprimir el promedio, los aprobados y cuántos estan
//entre 4 y 6..

#include<stdio.h> 
//#include<iostream> esta libreria tira error
#include<stdlib.h>
#include<string.h>


int main() {
	float i;
	int nombre;
	int cerquita=0;
	int aprobado=0;
	float num=0;
	float total=0;
	float nota;
	float promedio=0;
	for (i=1;i<=11;i+=1) 
	{
		printf("Introduzca un Nombre del alumno:\n");
		scanf("%s",&nombre);
		num=num+1;
		printf("Introduzca nota del alumno:\n");
		scanf("%f",&nota);
		total=total+nota;
		promedio=total/num;
	
        	if (nota>7)
         	{ 
         	aprobado++;
         	}        
			if(nota>=4 && nota<7)
        	{
			cerquita++;
			}
	}

    printf("\n El promedio de las notas : %0.2f \n",promedio);
    printf("\n Aprobaron la materia  : %d \n",aprobado);
    printf("\n No aprobaron: con 4 o 6 %d \n",cerquita);
	
	system("pause"); 
	return 0;
}

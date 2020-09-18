//4. Ingresar las edades y estaturas de los alumnos, calculare imprimir la edad
//promedio, la edad mayor y la estatura menor, los datos finalizan con edad = 0


#include<stdio.h>
//#include<iostream> esta libreria tira error
#include<stdlib.h>
#include<string.h>

int main()
{

int edad=0,cont=0,edadprom=0,edadmayor=0,suma=0;
float estaturamenor, altura;
printf("Ingrese edad del alumno \n");
scanf("%d",& edad);


while (edad!=0)// decimos que mientras edad sea diferente a cero
{
cont = cont+1;
suma=suma+edad; //sumamos las edades para al final del ciclo sacar el promedio
printf("Ingrese altura \n");
scanf("%f",&altura);

if (cont==1)
{
edadmayor=edad;
estaturamenor=altura;
}

if (edad>edadmayor)
{
edadmayor = edad;
}
if (altura>estaturamenor)
{
estaturamenor = altura;
}

printf("Ingrese edad del alumno \n");
scanf("%d",& edad);
}//fin ciclo while
edadprom=suma/cont; /dividimos la suma de las edes por la cantidad de alumnos ingresados segun el contador que esta al principio del ciclo

printf("La estatura menor es de: %0.2f  \n",estaturamenor);
printf("La edad mayor es de: %d  \n",edadmayor);
printf("La edad promedio es de: %d  \n",edadprom);

system("pause");
return 0;
}

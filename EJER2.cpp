#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

//Crea un Registro de alumnos para averiguar alumnos aprobados y desaprobados
//Ademas saca un promedio de los mismos
struct Reg
{
	char nom[50];
	char ape[50];
	float nota;
};
int i;
void CARGAR(Reg Lista[100],int N);
int APROBADOS(Reg Lista[100],int N);
float PORCENTAJE(Reg Lista[100],int N);
main()
{
	Reg Lista[100];
	int N,a;
	float p;
	printf("EJERCICIO 2");
	printf("\n\nIndique la cantidad de alumnos:  ");
	scanf("%d",&N);
	CARGAR(Lista,N);
	a= APROBADOS(Lista,N);
	system("CLS");
	printf("EJERCICIO 2");
	printf("\n\n La cantidad de alumnos aprobados es de: %d",a);
	getch();
	system("CLS");
	printf("EJERCICIO 2");
	printf("\n\n Lista de alumnos aprobados:\n\n");
	//MUESTRA LOS ALUMNOS APROBADOS 
	for(i=0;i<N;i++)
	{
		if(Lista[i].nota>=4)
		{
			printf("%s,%s\n",Lista[i].ape,Lista[i].nom);
		}
		else
		{
		}
	}
	getch();
	p = PORCENTAJE(Lista,N);
	system("CLS");
	printf("EJERCICIO 2");
	printf("\n\n El porcentaje de alumnos aprobados es de : %.2f",p);
	getch();

	
}

void CARGAR(Reg Lista[100],int N)
{
	//CARGA DEL REGISTRO
	system("CLS");
	printf("EJERCICIO 2");
	for(i=0;i<N;i++)
	{
	  	printf("\n\n Ingrese el apellido del alumno :  ");
	  	_flushall();
	  	gets(Lista[i].ape);
	  	printf("\n Ingrese el nombre del alumno %d :  ",i+1);
	  	_flushall();
	  	gets(Lista[i].nom);
	  	printf("\n Ingrese la nota  del alumno :  ");
	  	scanf("%f",&Lista[i].nota);
	}
}
int APROBADOS(Reg Lista[100],int N)
{
	//CUENTA LA CANTIDAD DE ALUMNOS APROBADOS
	int c=0;
	for(i=0;i<N;i++)
	{
		if(Lista[i].nota>=4)
		{
			c++;
		}
		else
		{
		}
	}
	return c;
}
float PORCENTAJE(Reg Lista[100],int N)
{
	//CALCULA EL PORCENTAJE DE ALUMNOS APROBADOS
	int c=0; float p;
	for(i=0;i<N;i++)
	{
		if(Lista[i].nota>=4)
		{
			c++;
		}
		else
		{
		}
	}
	p =(float)(c*100)/N;
	return p;
}



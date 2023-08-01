#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>



struct Datos
{
	char nombre[100];
	int dni;
	char fecha[100];
	float ventas[10];
};

void Buscar (Datos v[100], int N);



main()
{
	Datos v[100];
	int N;
	float Total;
	printf("Ingrese cantidad de clientes (Los primeros 5 no registran ventas: ");
	scanf("%d", &N);
	printf("\n");
	for(int i=0; i<N; i++)
	{
		printf("Ingresar Nombre Completo: ");
		_flushall();
		gets(v[i].nombre);
		printf("\nIngresar Dni: ");
		scanf("%d", &v[i].dni);
		printf("\nIngresar Fecha de incorporacion : ");
		_flushall();
		gets(v[i].fecha);
		printf("\n-----Ingresar Ventas-----");
		for (int j=0; j<5; j++)
		{
			if(j==0)
			{
				printf("\nIngresar Ventas del dia Lunes: ");
				scanf("%f", &v[i].ventas[j]);
			}
			if(j==1)
			{
				printf("\nIngresar Ventas del dia Martes: ");
				scanf("%f", &v[i].ventas[j]);
			}
			if(j==2)
			{
				printf("\nIngresar Ventas del dia Miercoles: ");
				scanf("%f", &v[i].ventas[j]);
			}
			if(j==3)
			{
				printf("\nIngresar Ventas del dia Jueves: ");
				scanf("%f", &v[i].ventas[j]);
			}
			if(j==4)
			{
				printf("\nIngresar Ventas del dia Viernes: ");
				scanf("%f", &v[i].ventas[j]);
			}
		}
		system("cls");
	}
	system("cls");
	Buscar(v, N);
	printf("\n\n");
	system("pause");
	system("cls");
	printf("\n\n");
	printf("\nDocumento");
	printf("\tApellido y Nombre");
	printf("\tLunes");
	printf("\tMartes");
	printf("\tMiesrcoles");
	printf("\tJueves");
	printf("\tViernes");
	printf("\tTotal");
	for (int i=0; i<N; i++)
	{
		printf("\n%d", v[i].dni);
		printf("\t%s", v[i].nombre);
		for (int j=0; j<5; j++)
		{
			if(j==0)
			{
				printf("\t\t%.2f", v[i].ventas[j]);
			}
			if(j==1)
			{
				printf("\t\t%.2f", v[i].ventas[j]);
			}
			if(j==2)
			{
				printf("\t\t%.2f", v[i].ventas[j]);
			}
			if(j==3)
			{
				printf("\t\t%.2f", v[i].ventas[j]);
			}
			if(j==4)
			{
				printf("\t\t%.2f", v[i].ventas[j]);
			}
		 Total=v[i].ventas[j]+Total;
		 
		}
		printf("\t\t%.4f", Total);
	    Total=0;
	}
}
void Buscar (Datos v[100], int N)
{
	char Busqueda[100];
	int Com=1;
	printf("\nIngrese Nombre a buscar: ");
	_flushall();
	gets(Busqueda);
	for (int i=0; i<N; i++)
	{
	Com=strcmp(v[i].nombre,Busqueda);
	if (Com==0)
	{
		printf("\nNombre: %s", v[i].nombre);
		for (int j=0; j<5; j++)
		{
			if(j==0)
			{
				printf("\nIngresar Ventas del dia Lunes: %.2f", v[i].ventas[j]);
			}
			if(j==1)
			{
				printf("\nIngresar Ventas del dia Martes: %.2f", v[i].ventas[j]);
			}
			if(j==2)
			{
				printf("\nIngresar Ventas del dia Miercoles: %.2f", v[i].ventas[j]);
			}
			if(j==3)
			{
				printf("\nIngresar Ventas del dia Jueves: %.2f", v[i].ventas[j]);
			}
			if(j==4)
			{
				printf("\nIngresar Ventas del dia Viernes: %.2f", v[i].ventas[j]);
			}
		}
	}
	Com=1;
    }
}

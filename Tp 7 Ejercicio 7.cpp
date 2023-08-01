#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>



	struct Datos
{
	char NomApe[30];
	char AnioIn[4];
	char AnioPro[4];
	int Antig;
};

void Antiguedad(Datos v[20], int N);
void BuscarNombre(Datos v[20], int N);


main()
{
	Datos v[20];
	char x[2], Buscar[30];
    int d, i=0, FechaIngreso, FechaProceso;
	
	do 
	{
	printf("Ingresa Nombre completos: ");
	_flushall();
	gets(v[i].NomApe);
	printf("\nIngresar Anio de ingreso: ");
	_flushall();
	gets(v[i].AnioIn);
	FechaIngreso=atoi(v[i].AnioIn);
	printf("\nIngresar Anio de proceso: ");
	_flushall();
	gets(v[i].AnioPro);
    FechaProceso=atoi(v[i].AnioPro);
	v[i].Antig=(FechaProceso-FechaIngreso);
	printf("%d", v[i].Antig);
	
	printf("\n\n¿Desea ingresar un nuevo formulario? \nPulse S)si , N)no: ");
	_flushall();
	gets(x);
	strlwr(x);
	if (strcmp(x,"s")==0)
	{
		i++;
	}
	if (i==19)
	{
		strcpy(x,"x");
	}
	printf("\n");
   }while (strcmp(x,"s" )==0 || strcmp(x,"si" )==0);
   int N=i+1;
   Antiguedad (v, N);
   BuscarNombre(v, N);
   	printf("\n\n");
   printf("\nLista: ");
   printf("\nNombre \t\tAnio de Ingreso \tAnio de Proceso \t\tAntiguedad: ");
   for ( i=0; i<N; i++)
   {
	printf("\n%s \t%d Anios \t\t%d Anios \t\t\t%d Anios", v[i].NomApe, FechaIngreso, FechaProceso, v[i].Antig);
	printf("\n");
	
   }
}


void Antiguedad(Datos v[20], int N)
{
	int i;
	float Prom;
	for (i=0; i<N; i++)
	{
		int Total = v[i].Antig+Total;
		Prom=Total/N;
	}
	printf ("\n-----El promedio de horas de antiguedad: %.2f-----\n", Prom);
}
void BuscarNombre(Datos v[20], int N)
{
	char Buscar[20];
	int Comp=1, Cont=0;
	printf("\nIngrese Nombre a buscar: ");
	gets(Buscar);
	for (int i=0; i<N; i++)
	{
	
		Comp=strcmp(v[i].NomApe,Buscar);
		

		if (Comp==0)
		{
			if (Cont==0)
			{
			printf("\n-----Lista de nombre buscado----- ");
	        printf("\nNombre \t\tAntiguedad: ");
			}
			printf("\n%s", v[i].NomApe);
			printf("\t%d anios", v[i].Antig);
			Cont++;
		}
		Comp=1;
		
	}
	if (Cont==0)
	{
		printf("\nNo se encontro el nombre introducido");
	}
}

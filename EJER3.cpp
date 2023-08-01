#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//Programa de Hotel Ejercicio 3 TP Registro

struct Reg
{
	char nomapeh[50];
	int cdo;//Ciudad De Origen (cdo)
	int dias;
	float imp;
	int serv;
	
};
int i;
void CARGAR(Reg Hotel[100], int N);
void PORCENTAJE(Reg Hotel[100], int N,float &p1, float &p2, float &p3);
float PLATA(Reg Hotel[100],int N);

main()//LLama funciones y muestra resultados
{
	Reg Hotel[100];
	int N;
	float p1,p2,p3,g;
	printf("EJERCICIO 3");
	printf("\n\n Indique la cantidad de huespedes:  ");
	scanf("%d",&N);
	CARGAR(Hotel,N);
	PORCENTAJE(Hotel,N,p1,p2,p3);
	system("CLS");
	printf("EJERCICIO 3");
	printf("\n\n El porcentaje de huespedes de Bs As es de: %.2f ",p1);
	printf("\n\n El porcentaje de huespedes de Rosario es de: %.2f ",p2);
	printf("\n\n El porcentaje de huespedes de Tucuman es de: %.2f ",p3);
	getch();
	g = PLATA(Hotel,N);
	system("CLS");
	printf("EJERCICIO 3");
	printf("\n\n El importe total por servicio de pension completa es de: %.2f",g);
	getch();
	
	
}
void CARGAR(Reg Hotel[100], int N)//Carga el vector de registros 
{
	system("CLS");
	printf("EJERCICIO 3");
	for (i=0;i<N;i++)
	{
		printf("\n\nIngrese el nombre y apellido del huesped %d:  ",i+1);
		_flushall();
		gets(Hotel[i].nomapeh);
		printf("\n\nIndique la ciudad de origen del huesped:");
		printf("\n 0 --> Buenos Aires");
		printf("\n 1 --> Rosario");
		printf("\n 2 --> Tucuman");
		printf("\n\nCiudad de origen:  ");
		scanf("%d",&Hotel[i].cdo);
		printf("\n\nIndique la cantidad de dias que se queda el huesped:  ");
		scanf("%d",&Hotel[i].dias);
		printf("\n\n Indique el importe a abonar por el huesped:  ");
		scanf("%f",&Hotel[i].imp);
		printf("\n\n Indique el tipo de servicio que eligio el huesped");
		printf("\n 0 --> Pension completa");
		printf("\n 1 --> Media Pension");
		printf("\n 2 --> Solo desayuno");
		printf("\n 3 --> Solo Habitacion");
		printf("\n\n Tipo de servicio:  ");
		scanf("%d",&Hotel[i].serv);
		system("CLS");
	    printf("EJERCICIO 3");
	}
	
}
//Saca Porcentaje de Ciudad de Origen de huespedes
void PORCENTAJE(Reg Hotel[100], int N,float &p1,float &p2, float &p3)
{
	int c1,c2,c3;
	c1 = 0;
	c2 = 0;
	c3 = 0;
	for (i=0;i<N;i++)
	{
		if(Hotel[i].cdo == 0)
		{
			c1++;
		}
		else
		{
		}
		
		if(Hotel[i].cdo == 1)
		{
			c2++;
		}
		else
		{
		}
		
		if(Hotel[i].cdo == 2)
		{
			c3++;
		}
		else
		{
		}
	}
	p1 = (c1*100)/N;
	p2 = (c2*100)/N;
	p3 = (c3*100)/N;
}
//Indica el monto total obtenido de servicio de pension completa
float PLATA(Reg Hotel[100],int N)
{
	float s=0;
	for (i=0;i<N;i++)
	{
		if(Hotel[i].serv == 0)
		{
			s = s + Hotel[i].imp; 
		}
		else
		{
			
		}
	}
	return s;
}

#include<stdlib.h>
#include<stdio.h>
#include <conio.h>
#include <string.h>
//EJERCICIO 1 REGISTROS
// EJEMPLO DE REGISTRO JERARQUIZADO
struct fingreso
{
	//REGISTRO SECUNDARIO 1
	int dia;
	int mes;
	int ano;
};
struct fnac
{
	//REGISTRO SECUNDARIO 2
	int day;
	int month;
	int year;
};
struct registro//REGISTRO PRINCIPAL
{
	int leg;
	char ayn[40];
	char cargo[15];
	float sueldo;
	fingreso ingreso;
	fnac nac;
};
//NOTAR QUE EL REGISTRO PRINCIPAL CONTIENE OTRO REGISTRO DENTRO
//COMO SOY YO NO ME DI CUENTA QUE BASTA CON CREAR UNO PARA HACER LAS DOS ULT.
//VARIABLES DEL REGISTRO PRINCIPAL
int i;
void CARGA(registro R[100], int N);
float TOTAL (registro R[100], int N);
float PROMEDIO(float tot,int N);
int FECHA (registro R[100],int N, int f);
int ANIO(registro R[100], int N, int y);

main()
{
	//SE LLAMAN FUNCIONES Y MUESTRAN RESULTADOS EN PANTALLA
	int N, f,c,y,promy; registro R[100];float tot,prom;
	printf("EJERCICIO 1:");
	printf("\n\n Indique la cantidad de empleados que posee su empresa: ");
	scanf("%d",&N);
	CARGA(R,N);
	tot = TOTAL (R,N);
	system("CLS");
	printf("EJERCICIO 1:");
	printf("\n\n El total de sueldos es de : %.2f",tot);
	getch();
	prom = PROMEDIO(tot,N);
	printf("\n\n El promedio de sueldos es de : %.2f",prom);
	getch();
	system("CLS");
	printf("EJERCICIO 1:");
	printf("\n\nIngrese la fecha de ingreso que desea averiguar:  ");
	scanf("%d",&f);
	c = FECHA(R,N,f);
	system("CLS");
	printf("EJERCICIO 1:");
	printf("\n\n La cantidad de empleados que ingresaron en el año %d es de : %d",f,c);
	getch();
	system("CLS");
	printf("EJERCICIO 1:");
	printf("\n\n Ingrese el año actual : ");
	scanf("%d",&y);
	promy = ANIO(R,N,y);
	system("CLS");
	printf("EJERCICIO 1:");
	printf("El promedio de las edades es de :  %d",promy);
	getch();
	
}
void CARGA(registro R[100], int N)
{
//CARGA DEL REGISTRO
	system("CLS");
	printf("EJERCICIO 1");
	for(i=1;i<=N;i++)
	{
		printf("\n\nIngrese el legajo del empleado %d :  ",i);
		scanf("%d",&R[i].leg);
		printf("\nIngrese el nombre del empleado %d :  ",i);
		_flushall();
		gets(R[i].ayn);
		printf("\nIngrese el cargo del empleado %d :  ",i);
		_flushall();
		gets(R[i].cargo);
		printf("\nIngrese el sueldo del empleado %d :  ",i);
		scanf("%f",&R[i].sueldo);
		printf("\nIndique el dia  de ingreso del empleado %d :  ",i);
		scanf("%d",&R[i].ingreso.dia);
		printf("\nIndique el mes  de ingreso del empleado %d :  ",i);
		scanf("%d",&R[i].ingreso.mes);
		printf("\nIndique el año  de ingreso del empleado %d :  ",i);
		scanf("%d",&R[i].ingreso.ano);
		printf("\nIndique el dia  de nacimiento del empleado %d :  ",i);
		scanf("%d",&R[i].nac.day);
		printf("\nIndique el mes  de nacimiento del empleado %d :  ",i);
		scanf("%d",&R[i].nac.month);
		printf("\nIndique el año  de nacimiento del empleado %d :  ",i);
		scanf("%d",&R[i].nac.year);
		
	}
}
float TOTAL (registro R[100], int N)
{
//CALCULA EL TOTAL EN SUELDOS
	float s = 0;
	for (i=1;i<=N;i++)
	{
		s = s + R[i].sueldo;
	}
	return s;
}
float PROMEDIO(float tot,int N)
{
	float prom;
	prom = tot/N;
	return prom;
}

int FECHA (registro R[100],int N, int f)
{
//CUENTA LOS EMPLEADOS QUE INGRESARON EN UN AÑO
	int c = 0;
	for(i=1;i<=N;i++)
	{
		if(R[i].ingreso.ano == f)
		{
			c = c + 1;
		}
		else
		{
		}
	}
	return c;
}
int ANIO(registro R[100], int N, int y)
{
	//SACA LA EDAD PROMEDIO DEL EMPLEADO
int edad[100],s, prom;
s = 0;
	for (i=1;i<=N;i++)
	{
		edad[i]= y - R[i].nac.year;
		s = s + edad[i];
		
		
	}
	prom = s/N;
	return prom;
}






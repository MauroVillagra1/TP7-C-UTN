#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>



struct fabrica
{
    char expediente[30];
	char propietario[30];
	int metrocuadrados;
	int tipodeobra=4;
	char fechaMonto[30];
	float monto;
	
};
void Montorecibido (fabrica v[30], int N);
main()
{
	fabrica v[30];
	int i=0, N;
	
	printf("Ingrese cantidad de expedientes: ");
	scanf("%d", &N);
	printf("\n");
	for(i=0; i<N; i++)
	{
		printf("Ingresar expediente: ");
		_flushall();
		gets(v[i].expediente);
		_flushall();
		printf("\nIngrese Nombre completo del propietario: ");
		_flushall;
		gets(v[i].propietario);
		printf("\nIngresar metros cuadrados: ");
		scanf("%d", &v[i].metrocuadrados);
		printf("\n\n");
		while (v[i].tipodeobra!=0 && v[i].tipodeobra!=1 && v[i].tipodeobra!=2 && v[i].tipodeobra!=3)
		{
		printf("\n-----Tipos de obras-----");
		printf("\n\n0: Viviendo Basica");
		printf("\n1: Viviendo de Lujo");
		printf("\n2: Edificio");
		printf("\n3: Predio Especial");
		printf("\n\nIngresar Tipo de obra: ");
		scanf("%d", &v[i].tipodeobra);
		if (v[i].tipodeobra!=0 && v[i].tipodeobra!=1 && v[i].tipodeobra!=2 && v[i].tipodeobra!=3)
		{
		printf("\n\nError, elegir un valor adecuado\n\n");
		}
        }
        printf("\nIngrese FECHA de Monto: ");
        _flushall();
        gets(v[i].fechaMonto);
        printf("\nIngresar Monto: ");
        scanf("%f", &v[i].monto);
        
        Montorecibido(v, N);
        system("cls");
        
	}
	    for(int i=0; i<N; i++)
	    {
	    printf("\nExpediente: %s", v[i].expediente);
        printf("\nPropietario: %s", v[i].propietario);
        printf("\nTipo de Obra: ");
        if (v[i].tipodeobra==0)
        {
        	printf("Vivienda Basica");
        }
        if (v[i].tipodeobra==1)
        {
        	printf("Vivienda de Lujo");
        }
        if (v[i].tipodeobra==2)
        {
        	printf("Edificio");
        }
        if (v[i].tipodeobra==3)
        {
        	printf("Predio Especial");
        }
        printf("\n\tFecha de Monto: %s", v[i].fechaMonto);
        printf("\n\tMonto: %.4f", v[i].monto );
        printf("\n\n");
        }
}
void Montorecibido(fabrica v[30], int N)
{
	int i;
	for (i=0; i<N; i++)
	{
		printf("\n\nEl expediente es: %s", v[i].expediente);
		printf("\nLa Fecha del monto es: %s", v[i].fechaMonto);
		printf("\nEl Monto es: %.4f\n\n", v[i].monto);
		system("pause");
	}
}

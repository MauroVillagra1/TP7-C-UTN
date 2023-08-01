#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>

struct fecha
{
	int dia, mes, anio;
};
struct datosCliente
{
	char ApeNom[30];
	char dire[30];
	float monVehi;
	fecha fecventa;
};
void  Mostrar(datosCliente v[100], int i);
main()
{
    datosCliente v[100];
	int Ventas, Dia, Mes, Anio;
	float aux=999999;
	printf("Ingrese la cantidad de ventas: ");
	scanf("%d", &Ventas);
	printf("\n");
	_flushall;
	
	for(int i=0; i<Ventas; i++)
	{
		printf("Ingresar Apellido y Nombre: ");
		scanf("%s",v[i].ApeNom);
		printf("\nIngresar domicilio: ");
		scanf("%s",v[i].dire);
		printf("\nIngresas monto del vehiculo: ");
		scanf("%f", &v[i].monVehi);
	    
		
		printf("\nFecha de venta: \n");
			
			printf("\nDia: ");
			scanf("%d", &v[i].fecventa.dia);
			printf("\nMes: ");
			scanf("%d", &v[i].fecventa.mes);
			printf("\nAnio: ");
			scanf("%d", &v[i].fecventa.anio);
		system("cls");
		Mostrar(v, i);	
			if (v[i].monVehi< aux)
			{
				aux=v[i].monVehi;
				Dia=v[i].fecventa.dia;
				Mes=v[i].fecventa.mes;
				Anio=v[i].fecventa.anio;	
			}
			
				printf("\n\n----------La fecha en la que mas se vendio-------- ");
				printf("\nDia: %d", Dia);
				printf("\nMes: %d", Mes);
				printf("\nAnio: %d\n\n", Anio);
				if(i<Ventas-1)
				{
				system("pause");
				system("cls");					
				}
				
	}
	
}
void Mostrar(datosCliente v[100], int i)
{
        
	
		printf("\nApellido y Nombre: %s", v[i].ApeNom);
		printf("\nDomicilio: %s", v[i].dire);
		printf("\nMonto del vehiculo: $%.2f", v[i].monVehi);
	    
		
		printf("\nFecha de venta: \n");
			
		printf("\nDia: %d", v[i].fecventa.dia);
		printf("\nMes: %d", v[i].fecventa.mes);
		printf("\nAño: %d", v[i].fecventa.anio);	
	
}

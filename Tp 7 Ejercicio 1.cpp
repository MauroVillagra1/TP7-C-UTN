#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>

struct registro
{
	int codCli;
	char ApeNom[30];
	char direc[30];
	float monCred;
};

void Carga(registro v[100], int Clientes);
void Monto(registro v[100], int Clientes);

main(void)
{
	registro v[100];
	int i, Clientes=0;
	printf("Ingresar la cantidad de clientes: ");
	scanf("%d", &Clientes);
    Carga(v, Clientes);
    Monto(v, Clientes);
	
	
	
}
void Carga(registro v[100], int Clientes)
{
	int i;
		for (i=0; i<Clientes; i++)
	{
		printf("\nIngerese codigo del cliente: ");
		scanf("%d", &v[i].codCli);
		_flushall();
		printf("\nIngerese Nombre completo del cliente: ");
		gets(v[i].ApeNom);
		printf("\nIngerese direccion del cliente: ");
		_flushall();
		gets(v[i].direc);
		printf("\nIngere monto de credito: ");
		scanf("%f", &v[i].monCred);
		printf("\n\n");
        printf("\nEl codigo de cliente es: %d", v[i].codCli);
		printf("\nEl Nombre completo del cliente es: %s", v[i].ApeNom);
		printf("\nLa direccion del cliente es: %s", v[i].direc);
		printf("\nEl monto del credito es: $%.2f", v[i].monCred);
		printf("\n\n");
	}
}
void Monto(registro v[100], int Clientes)
{
	int i;
	printf("\n\n");
	printf("\n----------Lista de Registros de clientes con un monto mayor a $40000----------");
	for (i=0; i<Clientes; i++)
	{
		if (v[i].monCred>30000)
		{
		printf("\nEl codigo de cliente es: %d", v[i].codCli);
		printf("\nEl Nombre completo del cliente es: %s", v[i].ApeNom);
		printf("\nLa direccion del cliente es: %s", v[i].direc);
		printf("\nEl monto del credito es: $%.2f", v[i].monCred);
		printf("\n\n");
		}
	}
}

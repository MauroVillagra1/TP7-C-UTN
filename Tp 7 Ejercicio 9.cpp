#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

struct Datos
{
	int codigo;
	char descripcion[20];
	int stock;
	float precio;
};




main()
{
	Datos v[30];
	int Buscar, Comp=1, Cont=0, b;
	int N, i, M, j, aux2, aux3;
	float aux4;
	char aux1[20];
	printf("Ingrese cantidad de productos; ");
	scanf("%d", &N);
	for(i=0; i<N; i++)
	{
		printf("\nIngrese Codigo de producto: ");
		scanf("%d", &v[i].codigo);
		printf("\nIngrese Descripcion: ");
		_flushall();
		gets(v[i].descripcion);
		printf("\nIngrese Stock del producto: ");
		scanf("%d", &v[i].stock);
		printf("\nIngresar precio del producto por unidad: ");
		scanf("%f", &v[i].precio);
		
		
	}
	printf("\n\nIngrese Codigo a Buscar: ");
	_flushall();
	scanf("%d", &Buscar);
    for(i=0; i<	N; i++)
    {
    	
    	if (Buscar==v[i].codigo)
    	{
    		printf("\n¿Desea eliminar este producto de su base de datos? (Ingrese valor 1 o 2) 1)Si 2)No: ");
    		scanf("%d", &M);
    		
    		if (M==1)
    		{
    		
    			for (j=i ; j<N; j++)
    			{		
    					v[j].codigo=v[j+1].codigo;
    					strcpy(v[i].descripcion,v[i+1].descripcion);
    					v[j].stock=	v[j+1].stock;
    					v[j].precio=v[j+1].precio;
    					if(Cont==0)
    					{
    						N=N-1;
    					}
    					Cont++;
    				}
    			}
    		}
    		
    	}
    	do{
		b=0;
    	for(i=0; i<N-1; i++)
		{
			if((strcmp(v[i+1].descripcion, v[i].descripcion))>0)
			{
				strcpy(aux1,v[i].descripcion);
				strcpy(v[i].descripcion,v[i+1].descripcion);
				strcpy(v[i+1].descripcion, aux1);
				aux2=v[i].codigo;
				v[i].codigo=v[i+1].codigo;
				v[i+1].codigo=aux2;
				aux3=v[i].stock;
				v[i].stock=v[i+1].stock;
				v[i+1].stock=aux3;
				aux4=v[i].precio;
				v[i].precio=v[i+1].precio;
				v[i+1].precio=aux4;
				b=1;
			}
		}
		}while(b==1);
		
		printf("\n-----Orden alfabetico decreciente de Descripcion-----\n");
		
		for(i=0; i<N; i++)
		{
			printf("\nCodigo: %d", v[i].codigo);
			printf("\nDescripcion: %s", v[i].descripcion);
			printf("\nStock: %d", v[i].stock);
			printf("\nPrecio %.2f", v[i].precio);
		}
		do{
		b=0;
			for(i=0; i<N-1; i++){
			if(v[i].stock > v[i+1].stock){
				strcpy(aux1, v[i].descripcion);
				strcpy(v[i].descripcion, v[i+1].descripcion);
				strcpy(v[i+1].descripcion, aux1);
				aux2=v[i].codigo;
				v[i].codigo=v[i+1].codigo;
				v[i+1].codigo=aux2;
				aux3=v[i].stock;
				v[i].stock=v[i+1].stock;
				v[i+1].stock=aux3;
				aux4=v[i].precio;
				v[i].precio=v[i+1].precio;
				v[i+1].precio=aux4;
				b=1;
			}
			}
			}while(b==1);
		
		printf("\n-----Orden Creciente de Stock-----\n");
		for(i=0; i<N; i++)
		{
			printf("\nCodigo: %d", v[i].codigo);
			printf("\nDescripcion: %s", v[i].descripcion);
			printf("\nStock: %d", v[i].stock);
			printf("\nPrecio %.2f", v[i].precio);
		}
		
    
    
}
    


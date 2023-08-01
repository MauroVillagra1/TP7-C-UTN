#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>
#include <math.h>

struct registro
{
	float PuntoX1;
	float PuntoX2;
	float PuntoY1;
	float PuntoY2;
	
};


main()
{
	int i=0;
	registro v[30];
	printf("Ingrese la coordenadas del Punto X1: ");
	scanf("%f", &v[i].PuntoX1);
	printf("\nIngrese la coordenadas del Punto Y1: ");
	scanf("%f", &v[i].PuntoY1);
	printf("\nIngrese la coordenadas del Punto X2: ");
	scanf("%f", &v[i].PuntoX2);
	printf("\nIngrese la coordenadas del Punto Y2: ");
	scanf("%f", &v[i].PuntoY2);	
	
	
	printf("\nLas coordenadas del Punto 1 son (%.2f , %.2f)", v[i].PuntoX1, v[i].PuntoY1);
	printf("\nLas coordenadas del Punto 2 son (%.2f , %.2f)", v[i].PuntoX2, v[i].PuntoY2);
	float X=pow(v[i].PuntoX1, 2);
	float Y=pow(v[i].PuntoY1, 2);
	float Distancia=sqrt(X+Y);
	printf("\nLa distancia del eje de coordenadas es: %.2f", Distancia);
	float S1=pow(((v[i].PuntoX2)-(v[i].PuntoX1)), 2);
	float S2=pow(((v[i].PuntoY2)-(v[i].PuntoY1)), 2);
	float Segmento=sqrt(S1+S2);
	printf("\nLa distancia entre el P1 y P2 es: %.2f", Segmento);
}



#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

struct notas
{
float PrimerTrimestre, SegundoTrimestre, TercerTrimestre, Promedio;
};


struct fecha
{
	int dia, mes, anio;
};
struct Alumnos
{
	int DNI;
	char ApeNom[30];
	fecha fechanacimiento;
	notas notas_colegio;
};





main()
{
    Alumnos v[30];
    int N, Cont=0;
    char ApellidoNombre[30];
    printf("Ingresar cantidad de Alumnos: ");
    scanf("%d", &N);
    
    for (int i=0; i<N; i++)
    {
    	printf("\nIngrese el DNI del Alumno: ");
    	scanf("%d", &v[i].DNI);
    	printf("\nIngrese Nombre completo del Estudiante: ");
    	_flushall();
    	gets(v[i].ApeNom);
    	printf("\n\nIngrese Fecha de Nacimiento: ");
    	printf("\n\nDia: ");
    	scanf("%d", &v[i].fechanacimiento.dia);
    	printf("\nMes: ");
    	scanf("%d", &v[i].fechanacimiento.mes);
    	printf("\nAnio: ");
    	scanf("%d", &v[i].fechanacimiento.anio);
    	printf("\n\nIngerese Notas Trimestrales: ");
    	printf("\n\nNotas del Primer Trimestre: ");
    	scanf("%f", &v[i].notas_colegio.PrimerTrimestre);
    	printf("\nNotas del Segundo Trimestre: ");
    	scanf("%f", &v[i].notas_colegio.SegundoTrimestre);
    	printf("\nNotas del Tercer Trimestre: ");
    	scanf("%f", &v[i].notas_colegio.TercerTrimestre);
    	
    	v[i].notas_colegio.Promedio=(v[i].notas_colegio.PrimerTrimestre+v[i].notas_colegio.SegundoTrimestre+v[i].notas_colegio.TercerTrimestre)/3;
     
	    if(v[i].notas_colegio.Promedio>8)
	    {
	 	Cont++;
	    }   
        printf("\nLa cantidad de Alumnos con un promedio mayor a 8 es: %d", Cont);  
        printf("\n\n"); 
	}
    
    
    
    
    
}

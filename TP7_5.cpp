#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//LO HIZO LA FOCO 
struct registro
{
       char apynom[35];
       char color[20];
       char provincia[20];
       char sexo[10];
       int edad;
       };
       void cargar(int n, registro pers[50]);
       void ordenar(int n, registro pers[50]);
       void mostrar(int n, registro pers[50]);
       void determinar(int n, registro pers[100]);
       
main()
{
      int n, i;
      registro persona[50];
      printf("Cantidad de personas que desea ingresar: ");
      scanf("%d", &n);
      cargar(n, persona);
      ordenar(n, persona);
      mostrar(n, persona);
      determinar(n, persona);
      system("PAUSE");
      }

void cargar(int n, registro pers[50]){
     system("cls");
     int i;
     printf("\nIngrese los datos de las personas\n");
     for(i=0;i<n;i++){
     _flushall();
     printf("Apellido y nombre de la persona %d: ", i+1);
     gets(pers[i].apynom);
     printf("Provincia de nacimiento: ");
     gets(pers[i].provincia);
     printf("Color de ojos: ");
     gets(pers[i].color);
     printf("Sexo: ");
     gets(pers[i].sexo);
     printf("Edad: ");
     scanf("%d", &pers[i].edad);
     }
     }
     
     void ordenar(int n, registro pers[50]){
          bool bandera;
          registro auxiliar[50];
          int i, valor;
          
          do
          {
              bandera=false;
              for(i=0;i<n;i++){
              if (strcmp(pers[i].apynom, pers[i+1].apynom)>0)
              {
              auxiliar[i]=pers[i];
              pers[i]=pers[i+1];
              pers[i+1]=auxiliar[i];
              bandera=true;
              }
              }
              }
          while(bandera==true);
          }
          
void mostrar(int n, registro pers[50]){
     int i;
     system("cls");
     printf("\nVector ordenado por Apellido y Nombre\n");
     
     for(i=0;i<n;i++){
     printf("\n\nApellido y nombre: ");
     puts(pers[i].apynom);
     printf("\n\nProvincia de nacimiento: ");
     puts(pers[i].provincia);
     printf("\n\nColor de ojos: ");
     puts(pers[i].color);
     printf("\n\nSexo: ");
     puts(pers[i].sexo);
     printf("\n\nEdad: ");
     printf("%d", pers[i].edad);
     }
     }
     
void determinar(int n, registro pers[100]){
     int i;
     bool valor;
     int contador=0;
     for(i=0;i<n;i++){
     if (strcmp(pers[i].color, "marrones")==0 && strcmp(pers[i].sexo,"femenino")==0 && strcmp(pers[i].provincia,"tucuman")==0)
     {
     contador=contador+1;
     }
     }
     printf("\n\nLa cantidad de personas de sexo femenino con ojos marrones en Tucuman es: %d\n", contador);
     }
     

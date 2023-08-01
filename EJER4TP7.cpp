#include<stdlib.h>
#include<stdio.h>
#include <conio.h>
#include <string.h>
///EJERCICIO 4 CREAR UN MENU CON OPCIONES VARIAS
struct fecha
{
       int dia;
       int mes;
       int ano;
};

struct Reg
{
       char nom[50];
       char ape[50];
       int telefono;
       int obrasoc;
       char direccion[50];
       fecha consulta;
       int alergia;
};
void CARGA (Reg FichasP[100],int i, int &N,int &aux,int &b);
void MOSTRARL (Reg FichasP [100], int i, int N);
void MOSTRARF (Reg FichasP [100], int i, int N);
void ELIMINAR (Reg FichasP [100], int i, int &N);
void MOSTRARA (Reg FichasP [100], int i, int N);
void SECRETO(Reg FichasP [100], int i, int N);
main()
{
     //MENU DEL PROGRAMA, CADA OPCION ES UNA FUNCION
	  Reg FichasP[100];
      int j ,i, N,aux1,b1;
      char opc;
      int dec ;
      j = 1;
      i = 0;
      N = 1;
      aux1 = 0;
      b1 =0;
      
      
      while (j == 1)
      {
            system("CLS");
            printf("EJERCICIO 4:");
            printf("\n\nFICHAPACIENTE  BETA 1.01");
            printf("\n\n\t\t\t MENU PRINCIPAL");
            printf( "\n\n\tSeleccione su opcion: ");
            printf("\n\n 1- Agregar un paciente");
            printf("\n 2- Buscar un paciente");
            printf("\n 3- Mostrar ult. fecha de consulta de un paciente");
            printf("\n 4- Eliminar un paciente");
            printf("\n 5- Mostrar pacientes con alergia");
            printf("\n 6- Salir del programa");
            printf("\n\n Seleccione opcion:   ");
            scanf("%d",&dec);
            if (dec == 1)
            {
                    CARGA(FichasP,i,N,aux1,b1);
                    //CREA UN NUEVO REGISTRO DE PACIENTE EN EL VECTOR 
                    
            }
            else
            {
            }
            if (dec == 2)
            {
            	MOSTRARL(FichasP,i,N);
            	//BUSCA PACIENTE Y MUESTRA FICHA 
            }
            else
            {
            	
            }
            if (dec == 3)
            {
            	MOSTRARF(FichasP,i,N);
            	//BUSCA PACIENTE Y MUESTRA ULT. FECHA DE CONSULTA
            }
            if (dec == 4)
            {
            	ELIMINAR (FichasP,i,N);
            	//BUSCA PACIENTE Y LO ELIMINA
            }
            if (dec == 5)
            {
            	MOSTRARA(FichasP,i,N);
            	//MUESTRA LA CANTIDAD DE PACIENTES CON ALERGIA 
            }
            if (dec == 6)
            {
            	//SALE DEL PROGRAMA 
				system("CLS");
            	printf("EJERCICIO 4:");
           		printf("\n\nFICHAPACIENTE  BETA 1.01");
           		printf("\n\n\t Esta seguro que desea salir? [s/n]:   ");
           		_flushall();
           		scanf("%c",&opc);
           		if (opc == 's' || opc == 'S')
           		{
           			system("CLS");
            		printf("EJERCICIO 4:");
           			printf("\n\nFICHAPACIENTE  BETA 1.01");	
           			printf("\n\n Pulse cualquier tecla para salir del programa....");
					getch();
					j = -1;
           		}
            }
            if (dec == 0)
            {
            	SECRETO(FichasP,i,N);
            	//SHHH SECRETO :D
            }
            
            
            
      }
}
            
void CARGA (Reg FichasP[100],int i, int &N,int &aux,int &b)
{
     char opc;
     //ESTA OPCION SIRVE PARA EVITAR SOBREESCRIBIR REGISTROS CARGADOS ANTERIORMENTE
	  opc = 's';
      if ( b == 1)
      {
      	i = aux +1;
      }
      else
      {
      }
      
     system("CLS");
     printf("EJERCICIO 4:");
     printf("\n\nFICHAPACIENTE  BETA 1.01");
     //CARGA TRADICIONAL, AL NO HABER UNA CANTIDAD DETERMINADA PARA PODER
     //TRABAJAR CON LAS DEMAS FUNCIONES ACA SE CREA N
     while(opc == 's')
     {
               printf("\n\n\t Ingrese el apellido del paciente:   ");
                _flushall();
                gets(FichasP[i].ape); 
               system("CLS");
               printf("EJERCICIO 4:");
                printf("\n\nFICHAPACIENTE  BETA 1.01");
                printf("\n\n\t Ingrese  el nombre del paciente:   ");
               _flushall();
               gets(FichasP[i].nom);
                system("CLS");
                printf("EJERCICIO 4:");
                printf("\n\nFICHAPACIENTE  BETA 1.01");
                printf("\n\n Ingrese el telefono del paciente:   ");
                scanf("%d",&FichasP[i].telefono);
                system("CLS");
                printf("EJERCICIO 4:");
                printf("\n\nFICHAPACIENTE  BETA 1.01");
                printf("\n\n Indique si el paciente posee obra social:");
                printf("\n      1---> Si tiene");
                printf("\n      2---> No tiene");
                printf("\n\n Ingrese el numero de la opcion");
			    printf("\n      Tiene?:   ");
                scanf("%d",&FichasP[i].obrasoc);
                system("CLS");
                printf("EJERCICIO 4:");
                printf("\n\nFICHAPACIENTE  BETA 1.01");
                printf("\n\nIndique la direccion del paciente:  ");
                _flushall();
                gets(FichasP[i].direccion);
                system("CLS");
                printf("EJERCICIO 4:");
                printf("\n\nFICHAPACIENTE  BETA 1.01");
                printf("\n\n Ingrese el dia de ultima consulta:   ");
                scanf("%d",&FichasP[i].consulta.dia); 
                printf("\n Ingrese el mes de ultima consulta:   ");
                scanf("%d",&FichasP[i].consulta.mes);
                printf("\n Ingrese el ano de ultima consulta:   ");
                scanf("%d",&FichasP[i].consulta.ano);
                system("CLS");
                printf("EJERCICIO 4:");
                printf("\n\nFICHAPACIENTE  BETA 1.01");
                printf("\n\n El Paciente es Alergico?");
                printf("\n 1--> Si");
                printf("\n 2--> No");
                 printf("\n\n Ingrese el numero de la opcion");
                printf("\n Respuesta :  ");
                scanf("%d",&FichasP[i].alergia);
                N ++;
                system("CLS");
                printf("EJERCICIO 4:");
                printf("\n\nFICHAPACIENTE  BETA 1.01");
                printf("\n\n Desea Ingresar otro paciente? [s/n] ");
                _flushall();
                scanf("%c",&opc);
                if (opc == 's')
                {
                	i ++;
                	 system("CLS");
               		printf("EJERCICIO 4:");
                	printf("\n\nFICHAPACIENTE  BETA 1.01");
                }
                else
                {
                	aux = i;
                	b = 1;
                	//ANTES DE SALIR DEL PROGRAMA LA BANDERA SE MARCA EN UNO
                	// Y EL AUXILIAR DEVUELVE EL VALOR A MAIN PARA QUE NO SE 
                	//PIERDA LA ULTIMA POSICION OCUPADA
                }
                
                
     }
     
}
void MOSTRARL (Reg FichasP [100], int i, int N)
{
	int op,b2;
	char bnom[50];
	char bape[50];
	char opc2;
	typedef char aux2[50];
	aux2 tooln[50];
	aux2 toola[50];
	b2 = 0;
	_flushall();
	opc2 = 's';
	//HACE LA BUSQUEDA DE ACUERDO AL NOMBRE
	//CREE UNA VARIABLE APARTE PARA QUE ENCUENTRE LA FICHA CON DIFERENCIA ENTRE
	//MAYUSCULAS Y MINUSCULAS
	//NO CONOCIA strcmpi SINO ME AHORRABA ESTO :(
	do
	{
		system("CLS");
    	printf("EJERCICIO 4:");
  		printf("\n\nFICHAPACIENTE  BETA 1.01");
  		printf("\n\n Ingrese el apellido del  paciente a buscar:  ");
  		_flushall();
  		gets(bape);
		printf("\n\n Ingrese  el nombre del paciente a buscar:  ");
  		_flushall();
  		gets(bnom);
		strupr(bnom);
  		strupr(bape);
		for (i =0;i<N;i++)
		{
			_flushall();
			strcpy (tooln[i],FichasP[i].nom);
			_flushall();
			strcpy(toola[i],FichasP[i].ape);
			strupr(tooln[i]);
			strupr(toola[i]);
		}
		
		
		for(i=0;i<N;i++)
		{
			if(strcmp(tooln[i],bnom) == 0 && strcmp(toola[i],bape) ==0 )
			{
				system("CLS");
    			printf("EJERCICIO 4:");
  				printf("\n\nFICHAPACIENTE  BETA 1.01");
  				printf("\n\n EL PACIENTE FUE ENCONTRADO: ");
				printf("\n\n Apellido :  %s",FichasP[i].ape);
				printf("\n Nombre(s) :  %s",FichasP[i].nom);	
  				printf("\n Telefono: %d",FichasP[i].telefono);
  				printf("\n Direccion:  %s",FichasP[i].direccion);
  				printf("\n Fecha de ultima consulta:  %d/%d/%d",FichasP[i].consulta.dia,FichasP[i].consulta.mes,FichasP[i].consulta.ano);
  				if(FichasP[i].obrasoc == 1)
  				{
  					printf("\n El paciente posee obra social");
  				}
  				else
  				{
  					printf("\n El paciente no posee obra social");
  				}
  				if(FichasP[i].alergia == 1)
  				{
  					printf("\n El paciente es alergico");
  				}
  				else
  				{
  					printf("\n El paciente no es alergico");
  				}
  				b2 = 1;
  				printf("\n\n Pulse una tecla para continuar....");
    			getch();
    			system("CLS");
    			printf("EJERCICIO 4:");
  				printf("\n\nFICHAPACIENTE  BETA 1.01");
  				printf("\n\n Desea buscar otro paciente? [s/n] :   ");
  				_flushall();
  				scanf("%c",&opc2);
  		    
  			
			}
			else
			{
				
			} 
		
		}
		if (b2 != 1)
		{
				system("CLS");
    			printf("EJERCICIO 4:");
  				printf("\n\nFICHAPACIENTE  BETA 1.01");
  				printf("\n\n EL PACIENTE NO FUE ENCONTRADO: ");
  				printf("\n\n Desea buscar de nuevo? [s/n]: ");
  				_flushall();
  				scanf("%c",&opc2);
		}
		if (opc2 == 's' || opc2 == 'S')
  				{
  					b2 = 0;
  				}
	
	}
	while(opc2 == 's' || opc2 == 'S' );
	
    
	
}                 
void MOSTRARF (Reg FichasP [100], int i, int N)
{
	
    //MISMA ESTRUCTURA DE MOSTRARL
    //CAMBIA EN IMPRIMIR LA FECHA DE ULTIMA CONSULTA
	int op,b2;
	char bnom[50];
	char bape[50];
	char opc2;
	typedef char aux2[50];
	aux2 tooln[50];
	aux2 toola[50];
	b2 = 0;
	_flushall();
	opc2 = 's';
	do
	{
		system("CLS");
    	printf("EJERCICIO 4:");
  		printf("\n\nFICHAPACIENTE  BETA 1.01");
  		printf("\n\n Ingrese el apellido del  paciente a buscar:  ");
  		_flushall();
  		gets(bape);
		printf("\n\n Ingrese  el nombre del paciente a buscar:  ");
  		_flushall();
  		gets(bnom);
		strupr(bnom);
  		strupr(bape);
		for (i =0;i<N;i++)
		{
			_flushall();
			strcpy (tooln[i],FichasP[i].nom);
			_flushall();
			strcpy(toola[i],FichasP[i].ape);
			strupr(tooln[i]);
			strupr(toola[i]);
		}
		
		
		for(i=0;i<N;i++)
		{
			if(strcmp(tooln[i],bnom) == 0 && strcmp(toola[i],bape) ==0 )
			{
				system("CLS");
    			printf("EJERCICIO 4:");
  				printf("\n\nFICHAPACIENTE  BETA 1.01");
  				printf("\n\n\t Paciente %s,%s: ",FichasP[i].ape,FichasP[i].nom);
  				printf("\n\n\t Su ultimo dia de consulta fue: %d/%d/%d",FichasP[i].consulta.dia,FichasP[i].consulta.mes,FichasP[i].consulta.ano);
  				b2 = 1;
  				printf("\n\n Pulse una tecla para continuar....");
    			getch();
    			system("CLS");
    			printf("EJERCICIO 4:");
  				printf("\n\nFICHAPACIENTE  BETA 1.01");
  				printf("\n\n Desea buscar otro paciente? [s/n] :   ");
  				_flushall();
  				scanf("%c",&opc2);
			
  			
			}
			else
			{
				
			} 
		
		}
		if (b2 != 1)
		{
				system("CLS");
    			printf("EJERCICIO 4:");
  				printf("\n\nFICHAPACIENTE  BETA 1.01");
  				printf("\n\n EL PACIENTE NO FUE ENCONTRADO: ");
  				printf("\n\n Desea buscar de nuevo? [s/n]: ");
  				_flushall();
  				scanf("%c",&opc2);
		}
		if (opc2 == 's' || opc2 == 'S')
  		{
  		    	b2 = 0;
  		}
	
	}
	while(opc2 == 's' || opc2 == 'S' );
	
}                 
void ELIMINAR (Reg FichasP [100], int i, int &N)
{
	//MISMA ESTRUCTURA DE MOSTRARL
	//CREO BANDERA PARA CONFIRMAR ELIMINACION
	//PARA BAJA FISICA SE CREA UN REGISTRO AUX Y SE SOBREESCRIBE EL ORIGINAL
	//EN CASO DE QUERER BORRAR OTRO PACIENTE, LA BANDERA VUELVE A 0
	Reg New[100];
	int op,b2,j;
	char bnom[50];
	char bape[50];
	char opc2, conf;
	typedef char aux2[50];
	aux2 tooln[50];
	aux2 toola[50];
	b2 = 0;
	j = 0;
	_flushall();
	opc2 = 's';
	do
	{
		system("CLS");
    	printf("EJERCICIO 4:");
  		printf("\n\nFICHAPACIENTE  BETA 1.01");
  		printf("\n\n Ingrese el apellido del  paciente a eliminar:  ");
  		_flushall();
  		gets(bape);
		printf("\n\n Ingrese  el nombre del paciente a eliminar:  ");
  		_flushall();
  		gets(bnom);
		strupr(bnom);
  		strupr(bape);
  		system("CLS");
    	printf("EJERCICIO 4:");
  		printf("\n\nFICHAPACIENTE  BETA 1.01");
  		printf("\n\n Esta seguro que desea eliminar el dato? [s/n]:   ");
  		_flushall();
		scanf("%c",&conf);
		if (conf == 's' || conf == 'S')
      {
			
			for (i =0;i<N;i++)
	     	{
				_flushall();
				strcpy (tooln[i],FichasP[i].nom);
				_flushall();
				strcpy(toola[i],FichasP[i].ape);
				strupr(tooln[i]);
				strupr(toola[i]);
			}
		
		
		for(i=0;i<N;i++)
		{
			if(strcmp(tooln[i],bnom) == 0 && strcmp(toola[i],bape) ==0 )
			{
				b2 = 1;	
  				
			}
			else
			{
				_flushall();
				strcpy(New[j].nom,FichasP[i].nom);
				_flushall();
				strcpy(New[j].ape,FichasP[i].ape);
				_flushall();
				strcpy(New[i].direccion,FichasP[i].direccion);
				New[j].telefono = FichasP[i].telefono;
				New[j].obrasoc = FichasP[i].obrasoc;
				New[j].alergia = FichasP[i].alergia;
				New[j].consulta.dia = FichasP[i].consulta.dia;
				New[j].consulta.mes = FichasP[i].consulta.mes;
				New[j].consulta.ano = FichasP[i].consulta.ano;
				j++;
			} 
	
		}
		if (b2 == 1)
		{
			N--;
			for (i=0;i<N;i++)
			{
				_flushall();
				strcpy(FichasP[i].nom,New[i].nom);
				_flushall();
				strcpy(FichasP[i].ape,New[i].ape);
					_flushall();
				strcpy(FichasP[i].direccion,New[i].direccion);
				 FichasP[i].telefono = New[i].telefono;
				 FichasP[i].obrasoc = New[i].obrasoc;
				 FichasP[i].alergia = New[i].alergia;
				 FichasP[i].consulta.dia = New[i].consulta.dia;
				 FichasP[i].consulta.mes = New[i].consulta.mes;
				 FichasP[i].consulta.ano = New[i].consulta.ano;
				 system("CLS");
    			printf("EJERCICIO 4:");
  				printf("\n\nFICHAPACIENTE  BETA 1.01");
  				printf("\n\n\n\n\t\t EL PACIENTE FUE ELIMINADO EXITOSAMENTE");
  				printf("\n\n Desea eliminar otro paciente? [s/n]:   ");
  				_flushall();
				scanf("%c",&opc2);
				if (opc2 == 's' || opc2 == 'S')
				{
					b2 =0;
				}
				 
			}
		}
		else
		{
			 	system("CLS");
    			printf("EJERCICIO 4:");
  				printf("\n\nFICHAPACIENTE  BETA 1.01");
  				printf("\n\n\n\n\t\t NO SE PUDO ENCONTRAR EL PACIENTE");
  				printf("\n\n Desea buscar de nuevo ? [s/n]:   ");
  				_flushall();
				scanf("%c",&opc2);
  				
		}
      }
      else
      {
      	
      }
	}
	while(opc2 == 's' || opc2 == 'S' );
}
void MOSTRARA (Reg FichasP [100], int i, int N)
{
	//ANALIZA LA CANTIDAD DE PACIENTES CON ALERGIA
	//LOS CUENTA Y MUESTRA DENTOR DE LA FUNCION
	int c =0;
	
	system("CLS");
    printf("EJERCICIO 4:");
    printf("\n\nFICHAPACIENTE  BETA 1.01");
    printf("\n\n LISTADO DE PACIENTES CON ALERGIA");
    printf("\n\n");
	for (i=0;i<N;i++)
	{
		if (FichasP[i].alergia == 1)
		{
			printf("\n %s, %s",FichasP[i].ape,FichasP[i].nom);
			c ++;
		}
		else
		{
		}
		
	}
	if (c != 0)
	{
		printf("\n\n\t El total de pacientes con alergia es de :  %d",c);
		getch();
	}
	else
	{
		system("CLS");
    	printf("EJERCICIO 4:");
    	printf("\n\nFICHAPACIENTE  BETA 1.01");
    	printf("\n\n\t Ninguno de los pacientes tiene alergia");
    	getch();
	}
	system("CLS");
    printf("EJERCICIO 4:");
   	printf("\n\nFICHAPACIENTE  BETA 1.01");
   	printf("\n\n Pulse una tecla para volver al menu principal...");	
}
void SECRETO(Reg FichasP [100], int i, int N)
{
		//OPCION AUXILIAR PARA VER LOS REGISTROS
		//OPCION SECRETA DE PROGRAMADOR 
			system("CLS");
            printf("EJERCICIO 4:");
            printf("\n\nFICHAPACIENTE  BETA 1.01");
           printf("\n\n Cantidad de pacientes en el registro: %d",N-1);
	for (i=0;i<N;i++)
	{
			   if (i != N-1) 
				{
					printf("\n\n Apellido :  %s",FichasP[i].ape);
					printf("\n Nombre(s) :  %s",FichasP[i].nom);	
  					printf("\n Telefono: %d",FichasP[i].telefono);
  					printf("\n Direccion:  %s",FichasP[i].direccion);
  					printf("\n Fecha de ultima consulta:  %d/%d/%d",FichasP[i].consulta.dia,FichasP[i].consulta.mes,FichasP[i].consulta.ano);
  					if(FichasP[i].obrasoc == 1)
  					{
  						printf("\n El paciente posee obra social");
  					}
  					else
  					{
  						printf("\n El paciente no posee obra social");
  					}
  					if(FichasP[i].alergia == 1)
  					{
  						printf("\n El paciente es alergico");
  					}
  					else
  					{
  						printf("\n El paciente no es alergico");
  					}
				}
	}
	printf("\n\n\t\t AGUANTE LA K4!!!!!!!!! :) ");

	getch();
}

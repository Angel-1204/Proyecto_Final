#include<stdio.h>
#include<conio.h>
#include<windows.h>
void Libro(void)
{
	//Declarar variables a utilizar
	int Fecha;
	int Numero;
	char * Apellido[100];
	char Inicial[3];
	char Titulo[100];
	char Lugar[100];
	char Editorial[100];
	
	//Apuntador a archivo
	FILE *a;
	a=fopen("ReferenciasAPA.txt","w");
	
	//Solicitar datos	
	printf("\n\t\tLibro\n");
	printf("\n\n Primer apellido del autor: ");
	scanf("%s",&Apellido);
	printf("\n Inicial del primer nombre del autor: ");
	scanf("%s",&Inicial);
	printf("\n A%co de publicaci%cn: ",164,162);
	scanf("%d",&Fecha);
	printf("\n N%cmero de edici%cn: ",163,162);
	scanf("%d",&Numero);
	getchar();
	printf("\n T%ctulo del libro: ",161);
	gets(Titulo);
	printf("\n Lugar de edici%cn: ",162);
	gets(Lugar);
	printf("\n Editorial: ");
	gets(Editorial);
	
	//Imprimir datos en pantalla y en archivo	
	printf("\n\n Referencia: ");
	printf("\n %.20s,%.2s.(%.4d).%s.(%ded.).%s:%s.",Apellido,Inicial,Fecha,Titulo,Numero,Lugar,Editorial);
	fprintf(a,"\n %.20s,%.2s.(%.4d).%s.(%ded.).%s:%s.",Apellido,Inicial,Fecha,Titulo,Numero,Lugar,Editorial);
	
	fclose(a);	
	getch();
	system ("cls");
}

void Periodico(void)
{
	//Declarar variables a utilizar
	int Dia;
	int Fecha;
	char * Mes[20];
	char * Apellido[100];
	char * Inicial[3];
	char Titulo[100];
	char Periodico[100];
	char Pagina[100];
	
	//Apuntador a archivo
	FILE *a;
	a=fopen("ReferenciasAPA.txt","w");
	
	//Solicitar datos	
	printf("\n\t\tPeri%cdico\n\n",162);
	printf("\n Instrucciones:\n %cSi necesitas agregar varias p%cginas, sep%cralas con un gui%cn. Ejemplo:5-6-8\n",4,4,160,160,162); 
	printf("\n\n Primer apellido del autor: ");
	scanf("%s",&Apellido);
	printf("\n Inicial del primer nombre del autor: ");
	scanf("%s",&Inicial);
	printf("\n A%co de publicaci%cn: ",164,162);
	scanf("%d",&Fecha);
	printf("\n D%ca de publicaci%cn: ",161,162);
	scanf("%d",&Dia);
	printf("\n Mes de publicaci%cn(agregar el nombre completo del mes): ",162);
	scanf("%s",&Mes);
	getchar();
	printf("\n T%ctulo  del art%cculo: ",161,161);
	gets(Titulo);
	printf("\n Nombre del peri%cdico: ",161);
	gets(Periodico);
	printf("\n N%cmero de p%cgina: ",163,160);
	gets(Pagina);
		
	//Imprimir datos en pantalla y en archivo	
	printf("\n\n Referencia: ");
	printf("\n %.20s,%.2s.(%.2d de %s de %.4d ).%s.%s,p.%s.",Apellido,Inicial,Dia,Mes,Fecha,Titulo,Periodico,Pagina);
	fprintf(a,"\n %.20s,%.2s.(%.2d de %s de %.4d ).%s.%s,p.%s.",Apellido,Inicial,Dia,Mes,Fecha,Titulo,Periodico,Pagina);
	
	fclose(a);	
	getch();
	system ("cls");
}

void Revistacienti(void)
{
	//Declarar variables a utilizar
	int Fecha;
	int Volumen;
	int NoRevista;
	char * Apellido[100];
	char * Inicial[3];
	char Titulo[100];
	char Revista[100];
	char Pagina[100];
	
	//Apuntador a archivo
	FILE *a;
	a=fopen("ReferenciasAPA.txt","w");
	
	//Solicitar datos	
	printf("\n\t\tRevista cient%cfica\n\n",161);
	printf("\n Instrucciones:\n %cSi necesitas agregar varias p%cginas, sep%cralas con un gui%cn. Ejemplo:5-6-8\n",4,4,160,160,162); 
	printf("\n\n Primer apellido del autor: ");
	scanf("%s",&Apellido);
	printf("\n Inicial del primer nombre del autor: ");
	scanf("%s",&Inicial);
	printf("\n A%co de publicaci%cn: ",164,162);
	scanf("%d",&Fecha);
	getchar();
	printf("\n T%ctulo  del art%cculo: ",161,161);
	gets(Titulo);
	printf("\n Nombre de la revista: ");
	gets(Revista);
	printf("\n Volumen: ");
	scanf("%d",&Volumen);
	printf("\n N%cmero de revista: ",163);
	scanf("%d",&NoRevista);
	getchar();
	printf("\n N%cmero de p%cgina: ",163,160);
	gets(Pagina);
		
	//Imprimir datos en pantalla y en archivo	
	printf("\n\n Referencia: ");
	printf("\n %.20s,%.2s.(%.4d).%s.%s,%d(%d),%s.",Apellido,Inicial,Fecha,Titulo,Revista,Volumen,NoRevista,Pagina);
	fprintf(a,"\n %.20s,%.2s.(%.4d).%s.%s,%d(%d),%s.",Apellido,Inicial,Fecha,Titulo,Revista,Volumen,NoRevista,Pagina);
	
	fclose(a);	
	getch();
	system ("cls");
}

void Web(void)
{
	//Declarar variables a utilizar
	int Dia;
	int Fecha;
	char * Mes[20];
	char * Apellido[100];
	char * Inicial[3];
	char Titulo[100];
	char Pagina[100];
	char URL[500];
	
	//Apuntador a archivo
	FILE *a;
	a=fopen("ReferenciasAPA.txt","w");
	
	//Solicitar datos	
	printf("\n\t\tP%cgina web\n",160);
	printf("\n\n Primer apellido del autor: ");
	scanf("%s",&Apellido);
	printf("\n Inicial del primer nombre del autor: ");
	scanf("%s",&Inicial);
	getchar();
	printf("\n Nombre de la p%cgina: ",160);
	gets(Pagina);
	printf("\n T%ctulo  del art%cculo: ",161,161);
	gets(Titulo);
	printf("\n D%ca de publicaci%cn: ",161,162);
	scanf("%d",&Dia);
	getchar();
	printf("\n Mes de publicaci%cn(agregar el nombre completo del mes): ",162);
	scanf("%s",&Mes);
	printf("\n A%co de publicaci%cn: ",164,162);
	scanf("%d",&Fecha);
	getchar();
	printf("\n URL: ");
	gets(URL);
		
	//Imprimir datos en pantalla y en archivo	
	printf("\n\n Referencia: ");
	printf("\n %.20s,%.2s.(%.2d de %s de %.4d ).%s.%s.%s",Apellido,Inicial,Dia,Mes,Fecha,Titulo,Pagina,URL);
	fprintf(a,"\n %.20s,%.2s.(%.2d de %s de %.4d ).%s.%s.%s",Apellido,Inicial,Dia,Mes,Fecha,Titulo,Pagina,URL);
	
	fclose(a);	
	getch();
	system ("cls");
}


int main()
{
	int Opcion;
	system ("cls");
	do
	{
		//Mensaje de bienvenida
	    printf("\n\t\t\t%c Referencias en formato APA %c\n\n",3,3);
		
		//Mostrar menú
	    printf("\n 1) Libro\n 2) Peri%cdico\n 3) Revista cient%cfica\n 4) P%cgina web\n 5) Salir\n",162,161,160);
		
		//Solicitar opción 
	    printf("\n Elige la opci%cn que deseas realizar: ");
	    scanf("%d",&Opcion);
		system ("cls");
		
		switch(Opcion)
		{
			case 1:
			    Libro();
			    break;
			case 2:
                Periodico();
				break;
			case 3:
                Revistacienti();
                break;
			case 4:
				Web();
				break;
			case 5:
				printf("\n Elegiste salir\n");		
				break;			
			default:	
                printf("\n Opci%cn no v%clida\n",162,160);
				getch();
				system("cls");
                break;		
		}
	}
	while(Opcion!=5);
    printf("\n\t\t%c%c%c Gracias por utilizar el programa %c%c%c\n\n",5,6,5,5,6,5);	
	getch();
	system("cls");
	return 0;
}
	

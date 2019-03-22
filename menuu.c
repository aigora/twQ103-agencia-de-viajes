//AGENCIA DE VIAJES 
#include<stdio.h>
#include <stdlib.h>

int main()
{
	system("color 4F");
	
	char Origen[40], Destino[40], respRegist;
	char Nombre[30], Apellido1[30], Apellido2[30];
	char CorreoElec[200], Contrasena[50];
	int NumPasajeros;
	int DD1, MM1, AA1, DD2, MM2, AA2;
	char opcion;
	printf("Introduzca su origen:\n");
	scanf("%s", Origen);
	gets(Origen); 

	printf("Introduzca el destino:\n");
	scanf("%s", Destino);
	gets(Destino); 

	printf("Introduzca la fecha de ida(DD/MM/AA):\n");
	scanf("%d %d %d", &DD1, &MM1, &AA1);

	printf("Introduzca la fecha de vuelta(DD/MMM/AA):\n");
	scanf("%d %d %d", &DD2, &MM2, &AA2);

	printf("Introduzca el n%cmero de pasajeros:\n", 163);
	scanf("%d", &NumPasajeros);
	
	do{
	
	printf("Esta usted registrado en nuestra agencia Si(S),No(N),Exit(E)\n");
	scanf("%c",&opcion);
	fflush(stdin);
	
    switch(opcion)//Esto no puede quedar así, cambiarlo antes de subirlo a github
	{
		case 'S':
		{
		
			printf("Escriba su contraseña:\n");
			scanf("%s",Contrasena );
			gets(Contrasena);
			
			printf("Mientras comprobamos su contrase%ca, nos encontramos buscando los mejores vuelos para usted ,familia y amigos!\n", 164);
			
			printf("Espere un momento\n");
			
			break;
		}
		case 'N':
		{
			printf("Escriba su nombre, por favor:\n");
			scanf("%s", Nombre);
			gets(Nombre);
			
			printf("Ahora, escriba sus apellidos:\n");
			scanf("%s %s", Apellido1, Apellido2 );
			gets(Apellido1);
			gets(Apellido2);
			
			printf("Escriba su correo electr%cnico para poder enviarle ofertas, informaci%cn sobre su vuelo...\n", 162, 162);
			scanf("%s", CorreoElec);
			gets(CorreoElec);
			
			printf("Por %cltimo, escriba una contrase%ca segura para acabar de configurar su cuenta:\n", 163, 164);
			scanf("%s",Contrasena);
			gets(Contrasena);
			
			break;
		}
		case 'E':
		{
			printf("Vuelva pronto!\n");
			printf("RECUERDE, VIAJAR ALIMENTA EL ALMA!\n");
			break;
		}
	}
    }while(opcion!='E');
	
    return 0;
}

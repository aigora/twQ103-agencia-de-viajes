//AGENCIA DE VIAJES
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


int imprimirBanner(); 
int menu1();

struct usuario{	
    char nombre[20], apellidos[50];
	char correo[50];
	char email[50];
	int password, contra;
	int telefono;
	int edad;
};	
struct vuelo{
	char origen[20];
	char destino[20];
	int idaDia, vueltaDia, idaYear;
	int idaMes, vueltaMes, vueltaYear;	
	int aldultos;
	int menores;
	
};


int main() {
	system("color 4F");
	
	int Banner;
	Banner=imprimirBanner();
	

	struct usuario persona;
	struct vuelo persona1;
	
	int i=0;
	char opcion1;
	int validacion1=0, validacion2=0, validacion3=0;

	do{
	
	printf("\n");
	printf("INTRODUZCA UNA DE LAS SIGUIENTES OPCIONES, POR FAVOR: \n");
	printf("\n");
	
	printf("A-Iniciar sesi%cn.\n", 162);
	printf("B-Registrar como usuario nuevo.\n");
	printf("C-Salir.\n");
	
	printf("\n");
	scanf("%s",&opcion1);
	fflush(stdin);
	
	
       switch(opcion1)
     	{
		case 'A':
		{
		       system("cls");
		       
		    	
				
				
		    		do {
		    	    printf("Iniciar sesi%cn",162);
		    	    printf("\n");
                 	printf(" %cIntroduzca su correo electr%cnico: ", 16, 162);
                 	fflush(stdin);
	                gets(persona.email);
	                printf("\n");
	                
	              	while(persona.email[i]!='\0'){
                     	if(persona.email[i]=='@'){
	
	                     validacion1=1;
                       	}
                     	else if(persona.email[i]=='.'){
                     		
	                   	validacion2=1;
                     	}
				 	i++;
                    }
                   
                    validacion3=validacion1+validacion2;
              	
              	}while(validacion3!=2);
        
			
              if (strcmp(persona.email,persona.correo)==0){
			
			    do{
				 printf(" %cContrase%ca: (5 digitos): ",16,164);
                 scanf("%d", &persona.contra);
                 printf("\n");
                 if(persona.contra==persona.password){
                 	printf("\n");
				 }
				 else{
				 	printf("Contrase%ca incorrecta\n", 164);
				 }
				 }while(persona.contra!=persona.password);
               
				 
                 	int opcion2;
	            	int op1;
		
		 
		         	while(1)
	         		{
			        op1=menu1();
			
	
			        switch(op1)
			        {
				       case 1: 
			            	{ 
			               	system("cls");
				            printf("**********OFERTAS DISPONIBLES**********:\n");
				            printf("\n");
	           	            printf("1.Italia......Precio por persona :  67 $\n");
 	        	            printf("2.Paris.......Precio por persona :  85 $\n");
 	        	            printf("3.Londres.....Precio por persona :  46 $\n");
 	        	            printf("4.Oslo........Precio por persona : 200 $\n");
 	        	            printf("5.Zagreb......Precio por persona : 180 $\n");
 	        	            printf("6.Berlin......Precio por persona :  96 $\n");
 	        	            printf("7.Grecia......Precio por persona :  79 $\n");
 	        	            printf("8.Polonia.....Precio por persona : 106 $\n");
 	        	            printf("9.Ucrania.....Precio por persona : 230 $\n");
			     	 
				            break;
				
			            	}
			          	case 2:
			              	{
	                          	system("cls");
				                printf("INFORMACION\n");
				                printf("ATR%cPALO naci%c en noviembre de 1969 con el objetivo de dar respuesta a las necesidades de los viajes de\n",-75,162);
				             	printf("negocio de los diferentes departamentos y empresas del Grupo ATR%cPALO. Con el paso del tiempo, y gracias a la\n", -75);
				            	printf("calidad de nuestros servicios, contamos con una completa  red de delegaciones con la que ofrecemos nuestros viajes \n",164);
				            	printf("a todos los clientes: vacacionales, empresas, etc.\n");
				            	printf("Con una experiencia de m%cs de 40 a%cos en activo y un lugar de reconocido prestigio en el sector, ATR%cPALO es\n", 160,164,-75);
				                printf("hoy la primera agencia de viajes de Espa%ca a toda Europa.\n",164);
						    break;
				            }	
				        case 3:
			            	{
			                system("cls");
			                printf("            REGISTRA TU VUELO");
			                printf("\n");
			                
			                printf(" %cOrigen: ",16);
			                scanf(" %s", persona1.origen);
			                printf("\n");
			                
			            	printf(" %cDestino: ", 16);
				            scanf("%s", persona1.destino);
				            printf("\n");
				            
				            printf(" %cFecha de ida (dia) (mes) (a%co): ", 16,164);
				            scanf("%d %d %d", &persona1.idaDia, &persona1.idaMes, &persona1.idaYear);
				            printf("\n");
				            
				            printf(" %cFecha de vuelta (dia) (mes) (a%co): ",16, 164);
				            scanf("%d %d %d" , &persona1.vueltaDia, &persona1.vueltaMes, &persona1.vueltaYear);
				            printf("\n");
				            
				            printf(" %cPersonas adultas: ",16);
				            scanf("%d", &persona1.aldultos);
				            printf("\n");
				            
				            printf(" %cPersonas menores: ",16);
				            scanf("%d", &persona1.menores);
				            printf("\n");
				
				           FILE*puntero;
				           puntero= fopen("archivo.txt", "w");
				           if(puntero== NULL){
	               	       printf("No es posible abrir el fichero \n");
	             	       return -1; 
                 	       }
               	
                            fprintf(puntero, "           ATRAPALO\n");
                           	fprintf(puntero, "Usted con nombre,  %s %s , ", persona.nombre, persona.apellidos);
			            	fprintf(puntero, " ha realizado un viaje con ATRAPALO a %s el %d / %d/ %d\n", persona1.destino, persona1.idaDia,persona1.idaMes, persona1.idaYear); 
					        fprintf(puntero, "y fecha de vuelta el %d /%d / %d desde %s\n", persona1.vueltaDia, persona1.vueltaMes, persona1.vueltaYear, persona1.origen);
                        	fprintf(puntero, "con %d acompañantes mayores de edad y %d menores\n", persona1.aldultos, persona1.menores);
                        	fprintf(puntero, "En unos dias le enviaremos los datos que faltan del vuelo a su correo.\n");
                         	fprintf(puntero, "Gracias por confiar en nuestra agencia de viajes.\n");
                         	fprintf(puntero, "DISFRUTALO!!\n");
                         	
                        	fclose(puntero); 
                            break;
			   	            }
			            	case 4:
				            {
				              system("cls");
				              printf("Salir\n");
				              exit(0);
		    	            }
		        
	                }
            
		
		          	printf("Si quiere volver al men%c principal pulse 0\n",163);
		          	getch();
                    }
            
            }
            else {
            	printf("Correo no v%clido\n",160);
			}
		
	    
	    
		break;
    	}
		case 'B':
		{
		    system("cls");
			printf("\n");
			printf("                          REGISTRO EN ATR%cPALO \n", 181);//Luego cambiar nombre de agencia
			printf("\n");
			
			printf(" %cIntroduzca su nombre: ", 16);
			scanf("%s", &persona.nombre);
			printf("\n");
			fflush(stdin);
			
			printf(" %cIntroduzca sus apellidos: ", 16);
			gets(persona.apellidos);
			printf("\n");
			
			do{
			printf(" %cIntroduzca su edad: ", 16);
			scanf("%d", &persona.edad);
			fflush(stdin);
			if(persona.edad>=18){
				printf("\n");
			}
			else{
				printf(" %cNo admite menor de edad\n");
			}
			
			
			}while(persona.edad<18);
			
	    	printf(" %cIntroduzca su tel%cfono de contacto: ", 16, 130);
			scanf("%d", &persona.telefono);
			printf("\n");
			fflush(stdin);
			
				do{
              	printf(" %cEscriba un email para acceder a la Agencia de viajes:",16);
	            gets(persona.correo);
	            printf("\n");
                	while(persona.correo[i]!='\0'){
                     	if(persona.correo[i]=='@'){
	
	                     validacion1=1;
                       	}
                     	else if(persona.correo[i]=='.'){
                     		
	                   	validacion2=1;
                     	}
				 	i++;
                    }
    
                    validacion3=validacion1+validacion2;
	
             	}while(validacion3!=2);
			
		   printf(" %cPor %cltimo, introduzca una contrase%ca num%crica segura: ", 16, 163, 164, 130);
		   scanf("%d", &persona.password);
		   printf("\n");
			
			break;
		}
		case 'C':
		{
			system("cls");
			printf("Vuelva pronto!\n");
			printf("RECUERDE, VIAJAR ALIMENTA EL ALMA!\n");
			break;
		}
	
     	}
     
    }while(opcion1!='E');
    
}

int imprimirBanner()
{
	printf("********************************************************************************\n");
 	printf("********************************************************************************\n");
 	printf("*******************BIENVENIDOS A NUESTRA AGENCIA DE VIAJES**********************\n");
 	printf("********************************************************************************\n");
 	printf("********************************************************************************\n");
 }


int menu1()
{
	int op1;
	system("cls");
	printf("Usted ha accedido a nuestra p%cgina web donde podr%c visitar todas las ofertas y vuelos\n",160,160);
	printf("\n");
	
	printf("Elija una de las opciones que quiera visitar\n");
	printf("\n");
	
	printf("1.Ofertas vuelos\n");
	printf("2.Informaci%cn sobre la agencia\n",162);
	printf("3.Registrar vuelo\n");
	printf("4.Salir\n");
	
	printf("\n");
	scanf("%d", &op1);
	
	return op1;
}


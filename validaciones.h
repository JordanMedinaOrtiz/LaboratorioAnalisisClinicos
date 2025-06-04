float validaCosto(const char mensaje[]){
	int valida = 0;
	float flotante = 0;
	
	do{
		printf("%s", mensaje);
		valida = scanf("%f", &flotante);
		fflush(stdin);
	}while(valida != 1 || flotante <= 0);
	
	return flotante;
}

void validaAnalisis(const char *mensaje ,char letra[4]){
	int numero = 0;
	char cadena[8];
	int aux = 0;
	
	do{
		numero = rand()%(999 + 1);		
	}while(numero < 99);
		
	for(int i=0; i<3; i++){
		do{
			aux = rand()%(91 + 65);			
		}while( aux < 65 || aux > 91);
		letra[i] = aux;
	}

	sprintf(cadena, "%d", numero);	
	strcat(letra, cadena);
	
	printf("%s%s", mensaje, letra);
}

void validaDAnalisis(const char *mensaje ,char cadena[]){
	bool bandera = true;
	mostrarCursor();
	
	while(bandera){
		printf("%s", mensaje);
		gets(cadena);
		fflush(stdin);
		for(int m=0; m<a; m++){
			if(	(strcmp(regisAnalisis[m].analisis, cadena) == 0	)){
				bandera = false;
				break;
			}
		}
		printf("Introduce un ID de analisis valido\n");
		
	}
}

void validaConsultarAnalisis(const char *mensaje ,char cadena[]){
	bool bandera = true;
	mostrarCursor();
	
	while(bandera){
		printf("\n%s", mensaje);
		gets(cadena);
		fflush(stdin);
		for(int m=0; m<a; m++){
			if(	(strcmp(regisAnalisis[m].analisis, cadena) == 0	)){
				bandera = false;
				break;
			}
		}
		printf("Introduce un ID de analisis valido");		
	}
	ocultarCursor();
}

void validaConsultarAnalisi(const char *mensaje ,char cadena[]){
	bool bandera = true;
	mostrarCursor();
	
	while(bandera){
		printf("%s", mensaje);
		gets(cadena);
		fflush(stdin);
		for(int m=0; m<b; m++){
			if(	(strcmp(regisDetalles[m].analisis, cadena) == 0	)){
				bandera = false;
				break;
			}
		}
		printf("Introduce un ID de Analisis valido\n");		
	}
	ocultarCursor();
}

void validaConsultarDescripcion(const char *mensaje ,char cadena[]){
	bool bandera = true;
	mostrarCursor();
	
	while(bandera){
		printf("\n%s", mensaje);
		gets(cadena);
		fflush(stdin);
		for(int m=0; m<a; m++){
			if(	(strcmp(regisAnalisis[m].descripcion, cadena) == 0	)){
				bandera = false;
				break;
			}
		}
		printf("Introduce una descripcion valida");		
	}
	ocultarCursor();
}

float validaConsultarCosto(const char *mensaje){
	bool bandera = true;
	float costo;
	mostrarCursor();
	
	while(bandera){
		costo = validaCosto(mensaje);
		for(int m=0; m<a; m++){
			if(	regisAnalisis[m].costo == costo	){
				bandera = false;
				break;
			}
		}
		printf("Introduce un costo valido\n");		
	}
	ocultarCursor();
	return costo;
}

void validaCadena(const char *mensaje, char cadena[], int tamano){
	bool bandera = true;
	
	while(bandera){
		printf("%s", mensaje);
		gets(cadena);
		fflush(stdin);
		if(strlen(cadena)>tamano){
			printf("Maximo de %d caracteres\n", tamano);
			continue;
		}else{
			for(int i=0; i<strlen(cadena); i++){
				if(isalpha(cadena[i]) || cadena[i] == ' '){
					if(i == strlen(cadena)-1){
						bandera = false;
					}
				}else break;
			}
		}
	}
}

void validaIDDetalle(const char *mensaje, char cadena[]){
	int entero = 0;
	
	do{
		entero = rand()%(9999 + 1);		
	}while(entero < 99);

	sprintf(cadena, "%d", entero);
	printf("%s", mensaje);
	printf("%s\n", cadena);
}

void validaConsultarIdDetalle(const char *mensaje ,char cadena[]){
	bool bandera = true;
	mostrarCursor();
	
	while(bandera){
		printf("%s", mensaje);
		gets(cadena);
		fflush(stdin);
		for(int m=0; m<b; m++){
			if(	(strcmp(regisDetalles[m].idDetalle, cadena) == 0)){
				bandera = false;
				break;
			}
		}
		printf("Introduce un ID de Detalle valido\n");		
	}
	ocultarCursor();
}

void menuAnalisis();
void menuAgregar();
void menuModificar();
void menuConsultar();
void menuEliminar();
void menuDetalles();
void menuDAgregar();
void menuDConsultar();
void menuDModificar();
void menuDEliminar();
void menu(int, int, int, int);

void menuProyecto(){
	while(opc != 3){
		system("color F0");
		system("cls");
		cuadro(44, 6, 75, 8, 3);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
		centrarTexto("Bienvenido Usuario",4);
		centrarTextoAcentos("           An%clisis          ",7,160);
		centrarTexto("Detalle de registro de pruebas",10);
		centrarTexto("             Salir            ",13);
		menu(43,7,1,3);
		cargando();
		system("cls");
		switch(opc){
			case OPC1:
				menuAnalisis();
				getch();
				break;
			case OPC2:
				menuDetalles();
				getch();
				break;
			case OPC3:
				system("color F0");
				centrarTexto("Saliste del Programa",10);
				actualizarArchivos();
				exit(0);
		}
	}
	getch();
}

void menu(int x, int y, int inicio, int fin){
	char tecla = '\0';
	opc = 1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),241);
	gotoxy(x,y);
	printf("%c",16);
	do{
		if(kbhit()){
			tecla =  getch();
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);
			gotoxy(x,y);
			printf("%c",16);
			if(opc > inicio && tecla == 72){
				y = y-3;
				opc--;
			}
			if(opc < fin && tecla == 80){
				y = y + 3;
				opc++;
			}	
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),241);
			gotoxy(x,y);
			printf("%c", 16);
		}
	}while(tecla != 13);
}

void menuAnalisis(){
	while(opc != 5){
		system("color F0");
		system("cls");
		cuadro(55, 6, 65, 8, 5);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
		centrarTextoAcentos("An%clisis",4,160);
		centrarTexto(" Agregar ",7);
		centrarTexto("Modificar",10);
		centrarTexto("Consultar",13);
		centrarTexto("Eliminar ",16);
		centrarTexto("Regresar ",19);
		menu(54,7,1,5);
		cargando();
		system("cls");
		switch(opc){
			case OPC1:
				menuAgregar();
				getch();
				break;
			case OPC2:
				menuModificar();
				getch();
				break;
			case OPC3:
				menuConsultar();
				getch();
				break;
			case OPC4:
				menuEliminar();
				getch();
				break;
			case OPC5:
				menuProyecto();
				break;
		}
	}
	getch();
}

void menuAgregar(){
	system("color F0");
	mostrarCursor();
	agregarAnalisi();
	cuadro(56, 23, 64, 25, 1);
	centrarTexto("Agregar",24);
	ocultarCursor();
	menu(55,24,1,1);
	cargando();
	system("cls");
	switch(opc){
			case OPC1:
				menuAnalisis();
				getch();
				break;
	}
}

void menuModificar(){
	char analisis[8];
	while(opc != 4){
		system("color F0");
		system("cls");
		centrarTexto("-----Modificar-----",1);
		imprimirAnalisis();
		validaConsultarAnalisis("Introduce el ID del analisis a modificar: ", analisis);
		system("cls");
		centrarTexto("Analsiis a Modificar: ", 1);
		printf("%s", analisis);
		system("cls");
		centrarTexto("-----Modificar-----\n",1);
		modificarAnalisis(analisis, 0);
		cuadro(54, 9, 66, 11, 4);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
		centrarTextoAcentos("Descripci%cn",10,162);
		centrarTexto("Condiciones",13);
		centrarTexto("   Costo   ",16);
		centrarTexto(" Regresar  ",19);
		menu(53,10,1,4);
		cargando();
		system("cls");
		system("color F0");
		centrarTexto("-----Modificar-----\n",1);
		switch(opc){
			case OPC1:
				modificarAnalisis(analisis, 1);
				cuadro(54, 9, 66, 11, 1);
				centrarTexto("Modificar",10);		
				getch();
				menuAnalisis();
				break;
			case OPC2:
				modificarAnalisis(analisis, 2);
				cuadro(54, 9, 66, 11, 1);
				centrarTexto("Modificar",10);		
				getch();
				menuAnalisis();
				break;
			case OPC3:
				modificarAnalisis(analisis, 3);
				cuadro(54, 9, 66, 11, 1);
				centrarTexto("Modificar",10);		
				getch();
				menuAnalisis();
				break;
			case OPC4:
				menuAnalisis();
				getch();
				break;
		}
	}
	getch();
}

void menuConsultar(){
	while(opc != 4){
		system("color F0");
		system("cls");
		cuadro(50, 6, 69, 8, 4);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
		centrarTexto("-----Consultar-----",1);
		centrarTextoAcentos2("C%cdigo de an%clisis",7,162,160);
		centrarTextoAcentos("   Descripci%cn   ",10,162);
		centrarTexto("      Costo       ",13);
		centrarTexto("     Regresar     ",16);
		menu(49,7,1,4);
		cargando();
		system("cls");
		system("color F0");
		centrarTexto("-----Consultar-----",1);
		switch(opc){
			case OPC1:
				consultarAnalisis();
				cuadro(54, 9, 65, 11, 1);
				centrarTexto("Regresar",10);
				getch();
				break;
			case OPC2:
				consultarDescripcion();	
				cuadro(54, 9, 65, 11, 1);
				centrarTexto("Regresar",10);	
				getch();
				break;
			case OPC3:
				consultarCosto();
				cuadro(54, 9, 65, 11, 1);
				centrarTexto("Regresar",10);
				getch();
				break;
			case OPC4:
				menuAnalisis();
				getch();
				break;
		}
	}
	getch();
}

void menuEliminar(){
	char analisis[8];
	while(opc != 2){
		system("color F0");
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
		centrarTexto("-----Eliminar-----",1);
		imprimirAnalisis();
		validaConsultarAnalisis("Introduce el ID del analisis a Eliminar: ", analisis);
		system("cls");
		centrarTexto("-----Eliminar-----\n",1);
		for(int m=0; m<a; m++){		
			if(strcmp(regisAnalisis[m].analisis, analisis) == 0){
				printf("\t\t\t");
				printf("%s\t", regisAnalisis[m].analisis);
				printf("%s\t", regisAnalisis[m].descripcion);
				printf("%s\t", regisAnalisis[m].condiciones);
				printf("%.2f\n", regisAnalisis[m].costo);
			}
		}
		cuadro(58, 13, 61, 15, 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
		centrarTexto("Estas seguro de Eliminar el ID: ",12);
		centrarTexto("SI", 14);
		centrarTexto("NO",17);
		menu(57,14,1,2);
		cargando();
		system("cls");
		system("color F0");
		centrarTexto("-----Eliminar-----\n",1);
		switch(opc){
			case OPC1:
				eliminarAnalisis(analisis);
				imprimirAnalisis();
				cuadro(54, 18, 65, 20, 1);
				centrarTexto("Regresar",19);
				getch();
				menuAnalisis();
				break;
			case OPC2:
				menuAnalisis();
				getch();
				break;
		}
	}
	getch();
}

void menuDetalles(){
	while(opc != 5){
		system("color F0");
		system("cls");
		cuadro(52, 6, 68, 8, 5);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
		centrarTexto("Detalle de registro de pruebas",4);
		centrarTexto("    Agregar    ",7);
		centrarTexto("   Consultar   ",10);
		centrarTexto("Modificar costo",13);
		centrarTexto("   Eliminar    ",16);
		centrarTexto("   Regresar    ",19);
		menu(51,7,1,5);
		cargando();
		system("cls");
		gotoxy(10,5);
		switch(opc){
			case OPC1:
				menuDAgregar();			
				getch();
				break;
			case OPC2:
				menuDConsultar();
				getch();
				break;
			case OPC3:
				menuDModificar();
				getch();
				break;
			case OPC4:
				menuDEliminar();
				getch();
				break;
			case OPC5:
				menuProyecto();
				break;
		}
	}
	getch();
}

void menuDAgregar(){
	system("color F0");
	mostrarCursor();
	agregarDetalle();
	cuadro(56, 23, 64, 25, 1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
	centrarTexto("Agregar",24);
	ocultarCursor();
	menu(55,24,1,1);
	cargando();
	system("cls");
	switch(opc){
			case OPC1:
				menuDetalles();
				getch();
				break;
	}
}

void menuDConsultar(){
	while(opc != 3){
		system("color F0");
		system("cls");
		cuadro(51, 6, 69, 8, 3);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
		centrarTexto("-----Consultar-----",1);
		centrarTextoAcentos("N%cmero de Detalle",7,163);
		centrarTextoAcentos("    An%clisis    ",10,160);
		centrarTexto("    Regresar     ",13);
		menu(50,7,1,3);
		cargando();
		system("cls");
		system("color F0");
		centrarTexto("-----Consultar-----",1);
		switch(opc){
			case OPC1:
				consultarDetalles();
				cuadro(54, 9, 65, 11, 1);
				centrarTexto("Regresar",10);		
				getch();
				menuDetalles();
				break;
			case OPC2:
				consultarAnalisi();
				cuadro(54, 9, 65, 11, 1);
				centrarTexto("Regresar",10);
				getch();
				menuDetalles();
				break;
			case OPC3:
				menuDetalles();
				getch();
				break;
		}
	}
	getch();
}

void menuDModificar(){
	char idDetalles[4];
	while(opc != 2){
		system("color F0");
		system("cls");
		centrarTexto("-----Modificar-----",1);
		imprimirDetalles();
		validaConsultarIdDetalle("Introduce el ID del analisis a modificar: ", idDetalles);
		system("cls");
		centrarTexto("Id de Detalle a Modificar: ", 1);
		printf("%s", idDetalles);
		system("cls");
		centrarTexto("-----Modificar-----\n",1);
		modificarDetalles(idDetalles, 0);
		cuadro(54, 9, 66, 11, 2);
		centrarTexto("   Costo   ",10);
		centrarTexto(" Regresar  ",13);
		menu(53,10,1,2);
		cargando();
		system("cls");
		system("color F0");
		centrarTexto("-----Modificar-----\n",1);
		switch(opc){
			case OPC1:
				modificarDetalles(idDetalles, 1);
				cuadro(54, 9, 66, 11, 1);
				centrarTexto("Modificar",10);		
				getch();
				menuDetalles();
				break;
			case OPC2:
				menuDetalles();
				getch();
				break;
		}
	}
	getch();
}

void menuDEliminar(){
	char idDetalle[5];
	while(opc != 2){
		system("color F0");
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
		centrarTexto("-----Eliminar-----\n",1);
		imprimirDetalles();
		validaConsultarIdDetalle("Introduce el ID del detalle a Eliminar: ", idDetalle);
		system("cls");
		centrarTexto("-----Eliminar-----\n",1);
		for(int m=0; m<b; m++){		
			if(strcmp(regisDetalles[m].idDetalle, idDetalle) == 0){
				printf("\t\t\t");
				printf("%s\t", regisDetalles[m].idDetalle);
				printf("%s\t", regisDetalles[m].analisis);
				printf("%s\t", regisDetalles[m].descripcion);
				printf("%s\t", regisDetalles[m].condiciones);
				printf("%.2f\n", regisDetalles[m].costo);
			}
		}
		cuadro(58, 13, 61, 15, 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
		centrarTexto("Estas seguro de Eliminar el ID: ",12);
		centrarTexto("SI", 14);
		centrarTexto("NO",17);
		menu(57,14,1,2);
		cargando();
		system("cls");
		system("color F0");
		centrarTexto("-----Eliminar-----\n",1);
		switch(opc){
			case OPC1:
				eliminarDetalles(idDetalle);
				imprimirDetalles();
				cuadro(54, 18, 65, 20, 1);
				centrarTexto("Regresar",19);
				getch();
				menuDetalles();
				break;
			case OPC2:
				menuDetalles();
				getch();
				break;
		}
	}
	getch();
}

void login(){
	system("COLOR F0");
	char usuario[12] = "Jordan";
	char contra[12] = "179913";
	char usu[12], con[12];
	int intentos = 0, i;
	char caracter;
	fflush(stdin);
	mostrarCursor();
	
	do{
		intentos++;
		i=0;
		system("cls");
		centrarTextoAcentos("Inicio de sesi%cn", 1, 162);
		gotoxy(50,4);
		printf("Usuario: ");
		gets(usu);
		gotoxy(50,5);
		printf("Contrase%ca: ",164);
		while(caracter = getch()){
			if(caracter == 13){
				con[i] = '\0';
				break;
			}
			else if(caracter == 8){
				if(i > 0){
					i--;
					printf("\b \b");
				}
			}
			else{
				printf("*");
				con[i] = caracter;
				i++;
			}
		}
		
		if(strcmp(usuario, usu) == 0 && strcmp(contra, con) == 0){
			centrarTexto("Los datos ingresados son correctos",6);
			gotoxy(0,7);
			ocultarCursor();
			cargando();
			menuProyecto();
		}
		
		else if(intentos == 3){
			centrarTexto("Datos incorrectos! Ha excedido el numero de intentos!",6);
			gotoxy(0,7);
			system("pause");
			exit(0);
		}
		
		else{
			centrarTexto("Datos incorrectos! Intenta de nuevo",6);
			gotoxy(0,7);
			system("pause");
		}
		
	}while(intentos !=3 );
	ocultarCursor();
}

void menuIniciar(){
	while(opc != 1){
		gotoxy(69,17);
		menu(69,17,1,1);
		cargando();
		system("cls");
		gotoxy(10,4);
		switch(opc){
			case OPC1:
				login();
				getch();
				break;
		}
	}
	getch();
}

void ocultarCursor(){
	printf("\e[?25l");
}

void mostrarCursor(){
	printf("\e[?25h");
}

void centrarTexto(const char *texto, int y){
	int longitud = strlen(texto);
	gotoxy(60-(longitud/2),y);
	printf(texto);
}

void centrarTextoAcentos(const char *texto, int y, int acentos){
	int longitud = strlen(texto);
	gotoxy(60-(longitud/2)+1,y);
	printf(texto, acentos);
}

void centrarTextoAcentos2(const char *texto, int y, int acentos, int acentos2){
	int longitud = strlen(texto);
	gotoxy(60-(longitud/2)+1,y);
	printf(texto, acentos, acentos2);
}

void cargando(){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
	centrarTexto("CARGANDO...",27);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
	for(int i = 20; i<=100; i++){
		gotoxy(i,28);
		printf("%c", 177);
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),34);
	for(int i = 20; i<=100; i++){
		gotoxy(i,28);
		printf("%c", 219);
		Sleep(25);
	}
}

void cuadro(int xs, int ys, int xi, int yi, int opciones){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),241);
	
	for(int i=0; i<opciones; i++){
		for(int i=xs; i <= xi; i++){
			gotoxy(i,ys);
			printf("%c",196);
			gotoxy(i,yi);
			printf("%c",196);
		}
	
		for(int i=ys; i <= yi; i++){
			gotoxy(xs,i);
			printf("%c",179);
			gotoxy(xi,i);
			printf("%c",179);
		}
	
		gotoxy(xs,ys);
		printf("%c",218);
		gotoxy(xi,yi);
		printf("%c",217);
		gotoxy(xi,ys);
		printf("%c",191);
		gotoxy(xs,yi);
		printf("%c",192);
		gotoxy(71,17);
		
		ys= ys + 3;
		yi= yi + 3;
	}
}

void datos(){
	ocultarCursor();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),246);
	gotoxy(60,10);
	printf("Universidad Polit%ccnica de San Luis Potos%c",130,161);
	gotoxy(60,11);
	printf("Programaci%cn I Lenguaje C",162);
	gotoxy(60,12);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),241);
	printf("Proyecto Final Laboratorio de An%clisis Cl%cnicos",160,161);
	gotoxy(60,13);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),245);
	printf("Jordan Medina Ort%cz-179913",161);
	gotoxy(60,14);
	printf("T07C");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),241);
	int xs=70, ys=16, xi=91, yi=18;
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
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),240);
	printf("Inicializar programa");
}

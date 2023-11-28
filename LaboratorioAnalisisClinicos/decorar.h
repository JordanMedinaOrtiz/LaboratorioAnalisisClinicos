void portada(){
	int aux = 0;
	FILE *archivo = fopen("archivos/portada.txt", "r");
	
	for(int i=0; i<14; i++){
		for(int j=0; j<54; j++){
			fscanf(archivo,"%d\t", &aux);
			aux = 16*aux+aux;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),aux);
			printf("%c",254);
		}
		printf("\n");
	}	
	fclose(archivo);
	menuIniciar();
}

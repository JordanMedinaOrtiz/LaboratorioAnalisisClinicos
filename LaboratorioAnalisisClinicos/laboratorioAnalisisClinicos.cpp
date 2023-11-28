#include "librerias.h"

int main(){
	srand(time(0));
	cargarAnalisis();
	cargarDetalles();
	system("COLOR F0");
	datos();
	gotoxy(0,7);
	portada();
	
	return 0;
}

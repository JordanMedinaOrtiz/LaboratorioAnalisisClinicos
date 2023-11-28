#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <ctype.h>
#include <time.h>

void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

typedef struct{
	char analisis[8];
	char descripcion[24];
	char condiciones[28];
	float costo;
}Analisis;

Analisis regisAnalisis[50] = {};
int a = 0;

Analisis analisis[] = {};

typedef struct{
	char idDetalle[5];
	char analisis[8];
	char descripcion[30];
	char condiciones[28];
	float costo;
}Detalles;

Detalles regisDetalles[50] = {};
int b = 0;

Detalles detalles[] = {};

typedef struct{
	int idPrueba;
	char estado[12];
	float total;
	int idPaciente;
}Registros;

Registros registro[]= {};

typedef struct{
	int idPaciente;
	char nombre[30];
	int edad;
	char telefono[9];
	char email[30];
	char fechaHora[28];
}Paciente;

Paciente paciente[] = {};

enum MENU{OPC1 = 1, OPC2, OPC3, OPC4, OPC5, OPC6, OPC7};
int opc = 0, x = 0, y = 0;

#include "diseño.h"
#include "validaciones.h"
#include "estructuras.h"
#include "archivos.h"
#include "menu.h"
#include "decorar.h"
#include "datos.h"

void imprimirAnalisis(){
	centrarTexto("-----Registros de Analisis-----\n",4);
	for(int m=0; m<a; m++){
		printf("\t\t\t");
		printf("%s\t", regisAnalisis[m].analisis);
		printf("%s\t", regisAnalisis[m].descripcion);
		printf("%s\t", regisAnalisis[m].condiciones);
		printf("%.2f\n", regisAnalisis[m].costo);
	}
}

void imprimirDetalles(){
	
	centrarTexto("-----Registros de Detalles-----\n",4);
	
	for(int m=0; m<b; m++){
		printf("\t\t\t");
		printf("%s\t", regisDetalles[m].idDetalle);
		printf("%s\t", regisDetalles[m].analisis);
		printf("%s\t", regisDetalles[m].descripcion);
		printf("%s\t", regisDetalles[m].condiciones);
		printf("%.2f\n", regisDetalles[m].costo);
	}
}

void imprimirRegistros(){
	printf("-----Estructura Registro Pruebas-----\n");
	
	for(int i=0; i<10; i++){
		printf("%d\t", registro[i].idPrueba);
		printf("%s\t", registro[i].estado);
		printf("$%.2f\t", registro[i].total);
		printf("%d\n", registro[i].idPaciente);
	}
	printf("\n\n");
}

void imprimirPaciente(){
	printf("-----Estructura Pacientes----\n");
	
	for(int i=0; i<10; i++){
		printf("%d\t", paciente[i].idPaciente);
		printf("%s\t", paciente[i].nombre);
		printf("%d\t", paciente[i].edad);
		printf("%s\t", paciente[i].telefono);
		printf("%s\t", paciente[i].email);
		printf("%s\n", paciente[i].fechaHora);

	}
	printf("\n\n");
}

void crear_arch_Analisis(){
	FILE *anali = NULL;
	if(!(anali=fopen("archivos/analisis.xls", "w"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	for(int i=0; i<10; i++){
		fprintf(anali, "%s\t", analisis[i].analisis);
		fprintf(anali, "%s\t", analisis[i].descripcion);
		fprintf(anali, "%s\t", analisis[i].condiciones);
		fprintf(anali, "%.2f\n", analisis[i].costo);
	}
	fclose(anali);
}

void leer_arch_Analisis(){
	FILE *anali = NULL;
	Analisis reg;
	
	if(!(anali=fopen("archivos/analisis.xls", "r"))){
		printf("Error al intentar crear archivos");
		exit(1);
	}
	printf("---------------Analisis------------------\n");
	while(!feof(anali)){
		fscanf(anali, "%[^\t]\t", reg.analisis);
		fscanf(anali, "%[^\t]\t", reg.descripcion);
		fscanf(anali, "%[^\t]\t", reg.condiciones);
		fscanf(anali, "%f\n", &reg.costo);
		
		printf("%s\t\t", reg.analisis);
		printf("%s\t\t", reg.descripcion);
		printf("%s\t\t", reg.condiciones);
		printf("$%.2f\n", reg.costo);

	}
	fclose(anali);
	printf("\n\n");
}

void crear_arch_Detalles(){
	FILE *deta = NULL;
	if(!(deta=fopen("archivos/detalles.xls", "w"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	for(int i=0; i<10; i++){
		fprintf(deta, "%s\t", detalles[i].idDetalle);
		fprintf(deta, "%s\t", detalles[i].analisis);
		fprintf(deta, "%s\t", detalles[i].descripcion);
		fprintf(deta, "%s\t", detalles[i].condiciones);
		fprintf(deta, "%.2f\n", detalles[i].costo);	
	}
	fclose(deta);
}

void leer_arch_Detalles(){
	FILE *deta = NULL;
	Detalles reg;
	
	if(!(deta=fopen("archivos/detalles.xls", "r"))){
		printf("Error al intentar crear archivos");
		exit(1);
	}
	printf("---------------Detalles------------------\n");
	while(!feof(deta)){
		fscanf(deta, "%[^\t]\t", reg.idDetalle);
		fscanf(deta, "%[^\t]\t", reg.analisis);
		fscanf(deta, "%[^\t]\t", reg.descripcion);
		fscanf(deta, "%[^\t]\t", reg.condiciones);
		fscanf(deta, "%f\n", &reg.costo);

		printf("%s\t\t", reg.idDetalle);
		printf("%s\t\t", reg.analisis);
		printf("%s\t\t", reg.descripcion);
		printf("%s\t\t", reg.condiciones);
		printf("$%.2f\n", reg.costo);
	}
	fclose(deta);
	printf("\n\n");
}

void crear_arch_Pacientes(){
	FILE *paci = NULL;
	if(!(paci=fopen("archivos/pacientes.xls", "w"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	for(int i=0; i<10; i++){
		fprintf(paci, "%d\t", paciente[i].idPaciente);
		fprintf(paci, "%s\t", paciente[i].nombre);
		fprintf(paci, "%d\t", paciente[i].edad);
		fprintf(paci, "%s\t", paciente[i].telefono);
		fprintf(paci, "%s\t", paciente[i].email);
		fprintf(paci, "%s\n", paciente[i].fechaHora);
	}
	fclose(paci);
}

void leer_arch_Pacientes(){
	FILE *paci = NULL;
	Paciente reg;
	
	if(!(paci=fopen("archivos/pacientes.xls", "r"))){
		printf("Error al intentar crear archivos");
		exit(1);
	}
	printf("---------------Pacientes------------------\n");
	while(!feof(paci)){
		fscanf(paci, "%d\t", &reg.idPaciente);
		fscanf(paci, "%[^\t]\t", reg.nombre);
		fscanf(paci, "%d\t", &reg.edad);
		fscanf(paci, "%[^\t]\t", reg.telefono);
		fscanf(paci, "%[^\t]\t", reg.email);
		fscanf(paci, "%[^\n]\n", reg.fechaHora);
		
		printf("%d\t\t", reg.idPaciente);
		printf("%s\t\t", reg.nombre);
		printf("%d\t", reg.edad);
		printf("%s\t", reg.telefono);
		printf("%s\t", reg.email);
		printf("%s\n", reg.fechaHora);
	}
	fclose(paci);
	printf("\n\n");
}

void crear_arch_Registros(){
	FILE *regist = NULL;
	if(!(regist=fopen("archivos/registros.xls", "w"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	for(int i=0; i<10; i++){
		fprintf(regist, "%d\t", registro[i].idPrueba);
		fprintf(regist, "%s\t", registro[i].estado);
		fprintf(regist, "%d\t", registro[i].idPaciente);
		fprintf(regist, "%.2f\n", registro[i].total);
	}
	fclose(regist);
}

void leer_arch_Registros(){
	FILE *regist = NULL;
	Registros reg;
	
	if(!(regist=fopen("archivos/registros.xls", "r"))){
		printf("Error al intentar crear archivos");
		exit(1);
	}
	printf("---------------Registros------------------\n");
	while(!feof(regist)){
		fscanf(regist, "%d\t", &reg.idPrueba);
		fscanf(regist, "%[^\t]\t", reg.estado);
		fscanf(regist, "%d\t", &reg.idPaciente);
		fscanf(regist, "%f\n", &reg.total);

		printf("%d\t\t", reg.idPrueba);
		printf("%s\t\t", reg.estado);
		printf("%d\t\t", reg.idPaciente);
		printf("$%.2f\n", reg.total);
	}
	fclose(regist);
	printf("\n\n");
}

void cargarAnalisis(){
	FILE *archAnalisis = NULL;
	
	if(!(archAnalisis=fopen("archivos/analisis.xls", "r"))){
		printf("Error al intentar leer el archivo");
		exit(1);
	}
	
	while(!feof(archAnalisis)){
		fscanf(archAnalisis, "%[^\t]\t", regisAnalisis[a].analisis);
		fscanf(archAnalisis, "%[^\t]\t", regisAnalisis[a].descripcion);
		fscanf(archAnalisis, "%[^\t]\t", regisAnalisis[a].condiciones);
		fscanf(archAnalisis, "%f\n", &regisAnalisis[a].costo);
		a++;
	}
	fclose(archAnalisis);
}

Analisis agregarAnalisis(){
	Analisis  analisis;
	
	validaAnalisis("El ID del Analisis es: ", analisis.analisis);
	validaCadena("\nIngresa descripcion: ", analisis.descripcion, 20);
	validaCadena("Ingresa las condiciones: ", analisis.condiciones, 24);
	analisis.costo = validaCosto("Ingresa costo: ");
	
	return analisis;
}

void agregarAnalisi(){
	centrarTextoAcentos("-----Agregar An%clisis-----\n\n", 1, 160);
	regisAnalisis[a] = agregarAnalisis();
	a++;
}

void consultarAnalisis(){
	char analisis[8];
	centrarTexto("Consultar Analisis\n",3);
	validaConsultarAnalisis("Introduce el ID del analisis: ", analisis);
	system("cls");
	centrarTexto("Consultaste el Analisis con el ID: ",3);
	printf("%s\n", analisis);
	for(int m=0; m<a; m++){
		if(strcmp(regisAnalisis[m].analisis, analisis) == 0){
			printf("\t\t\t");
			printf("%s\t", regisAnalisis[m].analisis);
			printf("%s\t", regisAnalisis[m].descripcion);
			printf("%s\t", regisAnalisis[m].condiciones);
			printf("%.2f\n", regisAnalisis[m].costo);
		}
	}
}

void consultarDescripcion(){
	char descripcion[24];
	centrarTexto("Consultar Descripcion\n",3);
	validaConsultarDescripcion("Introduce la descripcion: ", descripcion);
	system("cls");
	centrarTexto("Consultaste la Descripcion: ",3);
	printf("%s\n", descripcion);
	for(int m=0; m<a; m++){
		if(strcmp(regisAnalisis[m].descripcion, descripcion) == 0){
			printf("\t\t\t");
			printf("%s\t", regisAnalisis[m].analisis);
			printf("%s\t", regisAnalisis[m].descripcion);
			printf("%s\t", regisAnalisis[m].condiciones);
			printf("%.2f\n", regisAnalisis[m].costo);
		}
	}
}

void consultarCosto(){
	float costo = 0;
	centrarTexto("Consultar costo\n",3);
	costo = validaConsultarCosto("Introduce el costo: ");
	system("cls");
	centrarTexto("Consultaste el Costo: ",3);
	printf("%.2f\n", costo);
	for(int m=0; m<a; m++){
		if(regisAnalisis[m].costo == costo){
			printf("\t\t\t");
			printf("%s\t", regisAnalisis[m].analisis);
			printf("%s\t", regisAnalisis[m].descripcion);
			printf("%s\t", regisAnalisis[m].condiciones);
			printf("%.2f\n", regisAnalisis[m].costo);
		}
	}
}

void modificarAnalisis(char analisis[], int opcion){
	for(int m=0; m<a; m++){		
		if(strcmp(regisAnalisis[m].analisis, analisis) == 0){
			printf("\t\t\t");
			printf("%s\t", regisAnalisis[m].analisis);
			printf("%s\t", regisAnalisis[m].descripcion);
			printf("%s\t", regisAnalisis[m].condiciones);
			printf("%.2f\n", regisAnalisis[m].costo);
			
			
			mostrarCursor();
			if(opcion == 1) {
				validaCadena("Descripcion: ", regisAnalisis[m].descripcion, 20);				
			}
			if(opcion == 2){
				validaCadena("Condiciones: ", regisAnalisis[m].condiciones, 24);				
			}
			if(opcion == 3){
				regisAnalisis[m].costo = validaCosto("Costo: ");				
			}
			if(opcion == 0){
				break;
			}
		}
	}
	ocultarCursor();
}

void eliminarAnalisis(char analisis[]){
	for(int m=0; m<a; m++){
		if(strcmp(regisAnalisis[m].analisis, analisis) == 0){
			do{
				regisAnalisis[m] = regisAnalisis[m+1];
				m++;
			}while(m<a);
			a--;
			break;
		}
	}
}

void cargarDetalles(){
	FILE *archDetalles = NULL;
	
	if(!(archDetalles=fopen("archivos/detalles.xls", "r"))){
		printf("Error al intentar leer el archivo");
		exit(1);
	}
		
	while(!feof(archDetalles)){
		fscanf(archDetalles, "%[^\t]\t", regisDetalles[b].idDetalle);
		fscanf(archDetalles, "%[^\t]\t", regisDetalles[b].analisis);
		fscanf(archDetalles, "%[^\t]\t", regisDetalles[b].descripcion);
		fscanf(archDetalles, "%[^\t]\t", regisDetalles[b].condiciones);
		fscanf(archDetalles, "%f\n", &regisDetalles[b].costo);
		b++;
	}
	fclose(archDetalles);
}

Detalles agregarDetalles(){
	Detalles detalles;
	
	validaIDDetalle("ID de Detalle: ", detalles.idDetalle);
	validaDAnalisis("Ingresa el ID del Analisis: ", detalles.analisis);
	system("cls");
	centrarTexto("-----Agregar Detalle-----\n\n",1);
	printf("ID de Detalle: %d", detalles.idDetalle);
	printf("\nID de Analisis: %s", detalles.analisis);
	validaCadena("\nIngresa descripcion: ", detalles.descripcion, 20);
	validaCadena("Ingresa las condiciones: ", detalles.condiciones, 24);
	detalles.costo = validaCosto("Ingresa costo: ");
	
	
	return detalles;
}

void agregarDetalle(){
	centrarTexto("-----Agregar Detalle-----\n\n",1);
	regisDetalles[b] = agregarDetalles();
	b++;
}

void consultarDetalles(){
	char idDetalles[4];
	centrarTexto("Consultar ID de Descripcion\n",3);
	validaConsultarIdDetalle("Introduce el ID del Detalle: ", idDetalles);
	system("cls");
	centrarTexto("Consultaste el ID de Detalle: ",3);
	printf("%s\n", idDetalles);
	
	for(int m=0; m<b; m++){
		if(strcmp(regisDetalles[m].idDetalle, idDetalles) == 0){
			printf("\t\t\t");
			printf("%s\t", regisDetalles[m].idDetalle);
			printf("%s\t", regisDetalles[m].analisis);
			printf("%s\t", regisDetalles[m].descripcion);
			printf("%s\t", regisDetalles[m].condiciones);
			printf("%.2f\n", regisDetalles[m].costo);
		}
	}
}

void consultarAnalisi(){
	char analisis[8];
	centrarTexto("Consultar Analisis\n",3);
	validaConsultarAnalisis("Introduce el ID del analisis: ", analisis);
	system("cls");
	centrarTexto("Consultaste el Analisis con el ID: ",3);
	printf("%s\n", analisis);
	for(int m=0; m<b; m++){
		if(strcmp(regisDetalles[m].analisis, analisis) == 0){
			printf("\t\t\t");
			printf("%s\t", regisDetalles[m].idDetalle);
			printf("%s\t", regisDetalles[m].analisis);
			printf("%s\t", regisDetalles[m].descripcion);
			printf("%s\t", regisDetalles[m].condiciones);
			printf("%.2f\n", regisDetalles[m].costo);
		}
	}
}

void modificarDetalles(char idDetalle[], int opcion){
	for(int m=0; m<b; m++){		
		if(strcmp(regisDetalles[m].idDetalle, idDetalle) == 0){
			printf("\t\t\t");
			printf("%s\t", regisDetalles[m].idDetalle);
			printf("%s\t", regisDetalles[m].analisis);
			printf("%s\t", regisDetalles[m].descripcion);
			printf("%s\t", regisDetalles[m].condiciones);
			printf("%.2f\n", regisDetalles[m].costo);
			
			
			mostrarCursor();
			if(opcion == 1){
				regisDetalles[m].costo = validaCosto("Costo: ");				
			}
			if(opcion == 0){
				break;
			}
		}
	}
	ocultarCursor();
}

void eliminarDetalles(char detalle[]){
	for(int m=0; m<b; m++){
		if(strcmp(regisDetalles[m].idDetalle, detalle) == 0){
			do{
				regisDetalles[m] = regisDetalles[m+1];
				m++;
			}while(m<b);
			b--;
			break;
		}
	}
}

void actualizarArchivos(){
	FILE *anali = NULL;
	FILE *deta = NULL;
	
	if(!(anali = fopen("archivos/analisis.xls", "w"))){
		printf("Error al intentar crear el archivo");
		exit(1);
	}
	
	if(!(deta = fopen("archivos/detalles.xls", "w"))){
		printf("Error al intentar crear el archivo");
		exit(1);
	}
	
	for(int m=0; m<a; m++){
		fprintf(anali, "%s\t", regisAnalisis[m].analisis);
		fprintf(anali, "%s\t", regisAnalisis[m].descripcion);
		fprintf(anali, "%s\t", regisAnalisis[m].condiciones);
		fprintf(anali, "%.2f\n", regisAnalisis[m].costo);
	}
	
	fclose(anali);
	
	for(int m=0; m<b; m++){
		fprintf(deta, "%d\t", regisDetalles[m].idDetalle);
		fprintf(deta, "%s\t", regisDetalles[m].analisis);
		fprintf(deta, "%s\t", regisDetalles[m].descripcion);
		fprintf(deta, "%s\t", regisDetalles[m].condiciones);
		fprintf(deta, "%.2f\n", regisDetalles[m].costo);
	}
	
	fclose(deta);
}

#include <iostream>
#include <locale.h>

using namespace std;

//-------------------------------------------------------------------//

void MostrarTodoVentas(string nombre[],string productos[],int ventas[][5],int numProductos){
	for(int i = 0; i < 5; i++){
		for(int k = 0; k < numProductos; k++){
			cout<<"La cantidad vendida por la sucursal: "<<nombre[i]<<" para el artículo: "<<productos[k]<<
			" es de : "<<ventas[i][k]<<endl;	
		}
		cout<<endl<<endl;
	}
	system("pause");	
}

//-------------------------------------------------------------------//

void MostrarTodoStock(string nombre[],string productos[],int stock[][5],int numProductos){
	for(int i = 0; i < 5; i++){
		for(int k = 0; k < numProductos; k++){
			cout<<"La cantidad de stock disponible para la sucursal: "<<nombre[i]<<" para el artículo: "<<productos[k]<<
			" es de : "<<stock[i][k]<<endl;	
		}
		cout<<endl<<endl;
	}
	system("pause");	
}

//-------------------------------------------------------------------//

void MostrarTodasLasVentasDeLaSucursalDada(string nombre[],string productos[],int ventas[][5],int numProductos){
	int sucursal = 0;
	bool validar = false;
	while(validar == false){
		cout<<"Ingrese la sucursal que desea consultar\n";
		for(int i = 0; i < 5; i++){
			cout<<i+1<<")"<<nombre[i]<<endl;
		}
		cin>>sucursal;	
		if(sucursal>=1 && sucursal<=5){
		   validar = true;
		}else{
			system("cls");
			cout<<"Ingrese una opción válida\n";
		}
	}
	for(int i = 0; i < numProductos; i++){
		cout<<"La cantidad vendida por la sucursal: "<<nombre[sucursal-1]<<" para el artículo: "<<productos[i]<<
		" es de : "<<ventas[sucursal-1][i]<<endl;	
	}
	system("pause");
}

//-------------------------------------------------------------------//

void MostrarTodoElStockDeLaSucursalDada(string nombre[],string productos[],int stock[][5],int numProductos){
	int sucursal = 0;
	bool validar = false;
	while(validar == false){
		cout<<"Ingrese la sucursal que desea consultar\n";
		for(int i = 0; i < 5; i++){
			cout<<i+1<<")"<<nombre[i]<<endl;
		}
		cin>>sucursal;	
		if(sucursal>=1 && sucursal<=5){
		   validar = true;
		}else{
			system("cls");
			cout<<"Ingrese una opción válida\n";
		}
	}
	for(int i = 0; i < numProductos; i++){
		cout<<"La cantidad de stock por la sucursal: "<<nombre[sucursal-1]<<" para el artículo: "<<productos[i]<<
		" es de : "<<stock[sucursal-1][i]<<endl;		
	}
	system("pause");	
}

//-------------------------------------------------------------------//

void MostrarVentasDelArticuloDadoEnLaSucursalDada(string nombre[],string productos[],int ventas[][5],int numProductos){
	int sucursal = 0,producto=0;
	bool validar = false;
	while(validar == false){
		cout<<"Ingrese la sucursal que desea consultar\n";
		for(int i = 0; i < 5; i++){
			cout<<i+1<<")"<<nombre[i]<<endl;
		}
		cin>>sucursal;	
		if(sucursal>=1 && sucursal<=5){
		   validar = true;
		}else{
			system("cls");
			cout<<"Ingrese una opción válida\n";
		}
	}
	
	validar = false;
	while(validar == false){
		cout<<"Ingrese el producto que desea consultar\n";
		for(int i = 0; i < numProductos; i++){
			cout<<i+1<<")"<<productos[i]<<endl;
		}
		cin>>producto;	
		if(producto>=1 && producto<=numProductos){
		   validar = true;
		}else{
			system("cls");
			cout<<"Ingrese una opción válida\n";
		}
	}
	cout<<"La cantidad vendida por la sucursal: "<<nombre[sucursal-1]<<" para el artículo: "<<productos[producto-1]<<
	" es de : "<<ventas[sucursal-1][producto-1]<<endl;
	system("pause");	
}

//-------------------------------------------------------------------//
void MostrarStockDelArticuloDadoEnLaSucursalDada(string nombre[],string productos[],int stock[][5],int numProductos){
	int sucursal = 0,producto=0;
	bool validar = false;
	while(validar == false){
		cout<<"Ingrese la sucursal que desea consultar\n";
		for(int i = 0; i < 5; i++){
			cout<<i+1<<")"<<nombre[i]<<endl;
		}
		cin>>sucursal;	
		if(sucursal>=1 && sucursal<=5){
		   validar = true;
		}else{
			system("cls");
			cout<<"Ingrese una opción válida\n";
		}
	}
	
	validar = false;
	while(validar == false){
		cout<<"Ingrese el producto que desea consultar\n";
		for(int i = 0; i < numProductos; i++){
			cout<<i+1<<")"<<productos[i]<<endl;
		}
		cin>>producto;	
		if(producto>=1 && producto<=numProductos){
		   validar = true;
		}else{
			system("cls");
			cout<<"Ingrese una opción válida\n";
		}
	}
	cout<<"La cantidad vendida por la sucursal: "<<nombre[sucursal-1]<<" para el artículo: "<<productos[producto-1]<<
	" es de : "<<stock[sucursal-1][producto-1]<<endl;
	system("pause");	
}

//-------------------------------------------------------------------//

void RecaudacionTotalSucursal(string nombre[], int precios[], int ventas[][5],int numProductos){
	int suma=0;
	for(int i = 0; i < 5; i++){
		for(int k = 0; k < numProductos ; k++){
			suma=suma+(ventas[i][k]*precios[k]);
			if(k==numProductos-1 || numProductos == 0)
			{
				cout<<"La recaudacion total de la sucursal: "<<nombre[i]<<" es de: "<<suma<<"\n";
				suma=0;
			}
		}
	}
	system("pause");
}

//-------------------------------------------------------------------//

void SucursalConMayorCantidadDeUnidadesVendidas(string nombre[], int ventas[][5],int numProductos){
	int suma=0,mayorSuma=0,sucursalMayor=0;
	for(int i = 0; i < 5; i++){
		for(int k = 0; k < numProductos; k++){
			suma += ventas[i][k];
			if(k == numProductos-1 || numProductos == 0){
				if(suma>mayorSuma){
					mayorSuma = suma;
					sucursalMayor=i;
				}
				suma=0;
			}
		}
	}
	cout<<"La sucursal con mayor cantidad de unidades vendidas fue: "<<nombre[sucursalMayor]<<" y vendio un total de: "<<mayorSuma<<endl;
	system("pause");	
}

//------------------------------------------------------------------//

void SucursalConMayorRecaudacion(string nombre[],int precios[], int ventas[][5],int numProductos){
	int suma=0,mayorSuma=0,sucursalMayor=0;
	for(int i = 0; i < 5; i++){
		for(int k = 0; k < numProductos; k++){
			suma = suma+(ventas[i][k]*precios[k]);
			if(k == numProductos-1 || numProductos == 0){
				if(suma>mayorSuma){
					mayorSuma = suma;
					sucursalMayor=i;
				}
				suma=0;
			}
		}
	}
	cout<<"La sucursal con mayor cantidad de unidades vendidas fue: "<<nombre[sucursalMayor]<<" y recaudo un total de: "<<mayorSuma<<endl;
	system("pause");	
}

//-----------------------------------------------------------------//

void MostrarRecaudacionTotal(string nombre[], int precios[], int ventas[][5],int numProductos){
	int suma=0;
	for(int i = 0; i < 5; i++){
		for(int k = 0; k < numProductos; k++){
			suma = suma+(ventas[i][k]*precios[k]);
		}
	}
	cout<<"La empresa este mes a recaudado: "<<suma<<endl;
	system("pause");
}

//-----------------------------------------------------------------//
void registroYLogin() {
    string nombre, nombre2, password, password2;

    // Registro
    cout << "Por favor ingrese un nombre para la cuenta: ";
    cin.ignore();
    getline(cin, nombre);
    do {
        cout << "Por favor digite una contraseña mayor o igual a 8 caracteres: ";
        cin >> password;
        system("cls");
        if (password.length() < 8) {
            cout << "La contraseña no cumple los requisitos intentelo de nuevo\n";
        }
    } while (password.length() < 8);

    // Inicio de sesión
    do {
        cout << "Por favor digite su nombre de usuario: ";
        cin.ignore();
        getline(cin, nombre2);
        cout << "Por favor digite su contraseña: ";
        cin >> password2;
        system("cls");
        if (nombre2 == nombre && password2 == password) {
            cout << "Bienvenido a su cuenta Sr(a) " << nombre2 << endl;
            system("pause");
        } else {
            cout << "Los datos no coinciden intentelo de nuevo\n";
        }
    } while (!(nombre2 == nombre && password2 == password));
}

//-----------------------------------------------------------------//

void ModificarPrecios(int precios[], string productos[],int numProductos) {
    int indiceProducto;
    int nuevoPrecio;

    // Mostrar los productos y sus precios actuales
    cout << "Productos y precios actuales:\n";
    for(int i = 0; i < numProductos; ++i) {
        cout << i + 1 << ") " << productos[i] << " - Precio: " << precios[i] << "\n";
    }

    // Pedir al usuario que seleccione el producto a modificar
    cout << "Seleccione el número del producto para modificar su precio: ";
    cin >> indiceProducto;

    // Validar la entrada del usuario
    if (indiceProducto < 1 || indiceProducto > numProductos) {
        cout << "Número de producto no válido. Por favor, intente de nuevo.\n";
    } else {
        // Pedir al usuario que ingrese el nuevo precio
        cout << "Ingrese el nuevo precio para " << productos[indiceProducto - 1] << ": ";
        cin >> nuevoPrecio;

        // Actualizar el precio
        precios[indiceProducto - 1] = nuevoPrecio;
        cout << "El precio de " << productos[indiceProducto - 1] << " ha sido actualizado a " << nuevoPrecio << ".\n";
    } 
	system("pause");
}

//-----------------------------------------------------------------//

void ModificarVentas(string nombre[], string productos[], int stock[][5], int ventas[][5],int numProductos) {
    int sucursal, producto, cantidad;
    cout << "Ventas actuales por sucursal y producto:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Sucursal " << i + 1 << " - " << nombre[i] << ":\n";
        for (int j = 0; j < numProductos; j++) {
            cout << "\tProducto " << j + 1 << " - " << productos[j] << ": " << ventas[i][j] << "\n";
        }
    }

    // Solicitar y validar la entrada de la sucursal
    do {
        cout << "Ingrese el número de la sucursal para modificar las ventas: ";
        cin >> sucursal;
        if(sucursal < 1 || sucursal > 5){
        	system("cls");
            cout << "La sucursal no existe. Por favor, intente de nuevo.\n";
        }
    } while(sucursal < 1 || sucursal > 5);

    // Solicitar y validar la entrada del producto
    do {
        cout << "Ingrese el número del producto para modificar las ventas: ";
        cin >> producto;
        if(producto < 1 || producto > numProductos){
        	system("cls");
            cout << "El producto no existe. Por favor, intente de nuevo.\n";
        }
    } while(producto < 1 || producto > numProductos);

    // Solicitar la nueva cantidad de ventas
    cout << "Ingrese la nueva cantidad de ventas para " << productos[producto - 1] << ": ";
    cin >> cantidad;

    // Verificar que las ventas no superen el stock disponible
    if (cantidad > stock[sucursal - 1][producto - 1]) {
        cout << "Las ventas no pueden ser mayores a la cantidad disponible en stock.\n";
    } else {
        ventas[sucursal - 1][producto - 1] = cantidad;
        cout << "Las ventas del producto " << productos[producto - 1] << " en la sucursal " << nombre[sucursal - 1] << " han sido actualizadas a " << cantidad << ".\n";
    }
    system("pause");
}

//-----------------------------------------------------------------//

void ModificarStock(string nombre[], string productos[], int stock[][5],int numProductos) {
    int sucursal, producto, cantidad;
    cout << "Stock actual por sucursal y producto:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Sucursal " << i + 1 << " - " << nombre[i] << ":\n";
        for (int j = 0; j < numProductos; j++) {
            cout << "\tProducto " << j + 1 << " - " << productos[j] << ": " << stock[i][j] << "\n";
        }
    }

    // Solicitar y validar la entrada de la sucursal
    do {
        cout << "Ingrese el número de la sucursal para modificar el stock: ";
        cin >> sucursal;
        if(sucursal < 1 || sucursal > 5) {
        	system("cls");
            cout << "**La sucursal no existe. Por favor, intente de nuevo.**\n";
        }
    } while(sucursal < 1 || sucursal > 5);

    // Solicitar y validar la entrada del producto
    do {
        cout << "Ingrese el número del producto para modificar el stock: ";
        cin >> producto;
        if(producto < 1 || producto > numProductos) {
            system("cls");
			cout << "**El producto no existe. Por favor, intente de nuevo.**\n";
        }
    } while(producto < 1 || producto > numProductos);

    // Solicitar la nueva cantidad de stock
    cout << "Ingrese la nueva cantidad de stock para " << productos[producto - 1] << ": ";
    cin >> cantidad;

    // Actualizar el stock
    stock[sucursal - 1][producto - 1] = cantidad;
    cout << "El stock del producto " << productos[producto - 1] << " en la sucursal " << nombre[sucursal - 1] << " ha sido actualizado a " << cantidad << ".\n";
    system("pause");
}

//-----------------------------------------------------------------//

void EliminarProductoDeStock(string productos[], int stock[][5], int& numProductos) {
    int indiceProducto;
    cout << "Seleccione el número del producto para eliminar del stock: ";
    cin >> indiceProducto;

    if (indiceProducto < 1 || indiceProducto > numProductos) {
        cout << "Número de producto no válido.\n";
    } else {
        // Desplazar los productos y el stock una posición hacia adelante
        for (int i = indiceProducto - 1; i < numProductos - 1; i++) {
            productos[i] = productos[i + 1];
            for (int j = 0; j < 5; j++) { // Asumiendo 5 sucursales
                stock[j][i] = stock[j][i + 1];
            }
        }
        numProductos--; // Disminuir el contador de productos
    	cout << "Producto eliminado. Productos restantes: " << numProductos << endl;
    	for (int i = 0; i < numProductos; ++i) {
        	cout << productos[i] << endl;
    	}   
	}
	system("pause");
}


//-----------------------------------------------------------------//

void MenuOpciones(string nombre[], string productos[], int precios[], int stock[][5], int ventas[][5], int numProductos){
	int cont=0,eleccion=0;
	while(cont==0){
		system("cls");
		cout << "Ingrese la opción que desea realizar\n";
		cout << "1) Mostrar cantidad de artículos vendidos de cada artículo por cada sucursal\n";
		cout << "2) Mostrar cantidad de artículos vendidos de cada artículo en la sucursal indicada\n";
		cout << "3) Mostrar cantidad de artículos vendidos de un artículo dado en la sucursal indicada\n";
		cout << "4) Mostrar cantidad de stock disponible de cada artículo en la sucursal dada\n";
		cout << "5) Mostrar el stock disponible de todos los artículos en cada sucursal\n";
		cout << "6) Mostrar el stock disponible del artículo indicado en la sucursal dada\n";
		cout << "7) Mostrar la recaudación total de cada sucursal\n";
		cout << "8) Mostrar la sucursal con mayor número de unidades vendidas\n";
		cout << "9) Mostrar la sucursal con mayor recaudación\n";
		cout << "10) Mostrar la recaudación total de la empresa\n";
		cout << "11) Modificar los precios\n";
		cout << "12) Modificar el stock\n";
		cout << "13) Modificar las ventas\n";
		cout << "14) Eliminar producto del stock\n";
		cout << "15) Salir del programa\n";
		cin>>eleccion;
		switch(eleccion){
			case 1:{
				MostrarTodoVentas(nombre,productos,ventas,numProductos);				
				break;
			}
			case 2:{
				MostrarTodasLasVentasDeLaSucursalDada(nombre,productos,ventas,numProductos);	
				break;
			}
			case 3:{
				MostrarVentasDelArticuloDadoEnLaSucursalDada(nombre,productos,ventas,numProductos);
				break;
			}
			case 4:{
				MostrarTodoStock(nombre,productos,stock,numProductos);
				break;
			}
			case 5:{
				MostrarTodoElStockDeLaSucursalDada(nombre,productos,stock,numProductos);
				break;
			}
			case 6:{
				MostrarStockDelArticuloDadoEnLaSucursalDada(nombre,productos,stock,numProductos);
				break;
			}
			case 7:{
				RecaudacionTotalSucursal(nombre,precios,ventas,numProductos);
				break;
			}
			case 8:{
				SucursalConMayorCantidadDeUnidadesVendidas(nombre,ventas,numProductos);
				break;
			}
			case 9:{
				SucursalConMayorRecaudacion(nombre,precios,ventas,numProductos);
				break;
			}
			case 10:{
				MostrarRecaudacionTotal(nombre, precios,ventas,numProductos);
				break;
			}
			case 11:{
				ModificarPrecios(precios,productos,numProductos);
				break;
			}
			case 12:{
				ModificarStock(nombre,productos,stock,numProductos);
				break;
			}
			case 13:{
				ModificarVentas(nombre, productos, stock, ventas,numProductos);
				break;
			}
			case 14:{
				EliminarProductoDeStock(productos, stock, numProductos);
				break;
			}
			case 15:{
				system("cls");
				cont = 1;
				break;
			}
			default:{
				cout<<"Digite un opción valida\n";
				system("pause");
				break;
			}
		}
	}
}

//-------------------------------------------------------------------//

int main(){
	
	setlocale(LC_CTYPE,"spanish");
	
	int men_registro = 0;
    cout<<"1)Registro e inicio de sesión\n";
    cout<<"2)Salir\n";
    cin >> men_registro;
    system("cls");
    if (men_registro == 1) {
        registroYLogin();
    } else {
        return 1;
    }
	int numProductos = 5;
	string nombre[5]={"Sucursal_1","Sucursal_2","Sucursal_3","Sucursal_4","Sucursal_5"};
	string productos[5]={"Hamburguesas","Pizzas","HotDogs","Nuggets","Donas"};
	//Precios_Productos//
	int precios[5]={18900,25900,14900,9900,4900};
	//Productos disponibles por sucursal
	int stock[5][5]={{30,15,20,45,50},//Sucursal_1,Stock
					 {20,35,10,35,40},//Sucursal_2,Stock
					 {50,20,15,35,45},//Sucursal_3,Stock
					 {10,40,25,45,30},//Sucursal_4,Stock
					 {40,10,30,30,25}};//Sucursal_5,Stock
					 
	int ventas[5][5]={{30,12,20,30,41},//Sucursal_1,Ventas
					  {20,23,7,29,33},//Sucursal_2,Ventas
					  {50,17,3,19,43},//Sucursal_3,Ventas
					  {10,40,25,45,30},//Sucursal_4,Ventas
					  {40,3,15,15,24}};//Sucursal_5,Ventas
	MenuOpciones(nombre, productos, precios, stock, ventas, numProductos);			  		
	return 0;
}



#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_CTYPE,"spanish");

	
	//Inicio//
	string nombre="Admin",nombre2="Admin",password,password2;
	int men_registro=0;
	
	cout<<"1)Registro e inicio de sesi�n\n";
		cin>>men_registro;
	system("cls");
	switch(men_registro){
		case 1:{
			//Registro//
			cout<<"Por favor ingrese un nombre para la cuenta: ";
			cin>>nombre;
			do{
				cout<<"Por favor digite una contrase�a mayor o igual a 8 caracteres: ";
				cin>>password;
				system("cls");
				if(password.length() < 8){
					cout<<"La contrase�a no cumple los requisitos intentelo de nuevo\n";
				}
			}while(password.length() < 8);
			//Inicio de sesi�n//
			do{
				cout<<"Por favor digite su nombre de usuario: ";
				cin>>nombre2;
				cout<<"Por favor digite su contrase�a: ";
				cin>>password2;
				system("cls");
				if(nombre2 == nombre && password2 == password){
					cout<<"Bienvenido a su cuenta Sr(a) "<<nombre<<endl;
					system("pause");
				}else{
					cout<<"Los datos no coinciden intentelo de nuevo\n";
				}
			}while(!(nombre2 == nombre && password2 == password));
			break;
		}
		default:{
			cout<<"Digite una opci�n valida.";
			break;
		}
	}
	system("cls");
	int men_sucursal=0;
	
	cout<<"Por favor seleccione la sucursal a modificar: "<<endl;
	cout<<"1)1� Sucursal\n";
	cout<<"2)2� Sucursal\n";
	cout<<"3)3� Sucursal\n";
	cout<<"4)4� Sucursal\n";
	cout<<"5)5� Sucursal\n";
	cin>>men_sucursal;
	
	switch(men_sucursal){
		case 1:{
			cout<<"Bienvenido a la Sucursal 1� ";
			break;
		}
		case 2:{
			cout<<"Bienvenido a la Sucursal 2� ";
			break;
		}
		case 3:{
			cout<<"Bienvenido a la Sucursal 3� ";			
			break;
		}
		case 4:{
			cout<<"Bienvenido a la Sucursal 4� ";
			break;
		}
		case 5:{
			cout<<"Bienvenido a la Sucursal 5� ";
			break;
		}
		default:{
			cout<<"Por favor ingrese una sucursal valida";
			break;
		}
	}
	
	return 0;
}


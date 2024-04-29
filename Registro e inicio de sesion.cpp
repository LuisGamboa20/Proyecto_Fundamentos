#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_CTYPE,"spanish");

	
	//Inicio//
	string nombre="Admin",nombre2="Admin",password,password2;
	int men_registro=0;
	
	cout<<"1)Registro e inicio de sesión\n";
		cin>>men_registro;
	system("cls");
	switch(men_registro){
		case 1:{
			//Registro//
			cout<<"Por favor ingrese un nombre para la cuenta: ";
			cin>>nombre;
			do{
				cout<<"Por favor digite una contraseña mayor o igual a 8 caracteres: ";
				cin>>password;
				system("cls");
				if(password.length() < 8){
					cout<<"La contraseña no cumple los requisitos intentelo de nuevo\n";
				}
			}while(password.length() < 8);
			//Inicio de sesión//
			do{
				cout<<"Por favor digite su nombre de usuario: ";
				cin>>nombre2;
				cout<<"Por favor digite su contraseña: ";
				cin>>password2;
				system("cls");
				if(nombre2 == nombre && password2 == password){
					cout<<"Bienvenido a su cuenta Sr(a) "<<nombre;
				}else{
					cout<<"Los datos no coinciden intentelo de nuevo\n";
				}
			}while(!(nombre2 == nombre && password2 == password));
			break;
		}
		default:{
			cout<<"Digite una opción valida.";
			break;
		}
	}
		
	return 0;
}


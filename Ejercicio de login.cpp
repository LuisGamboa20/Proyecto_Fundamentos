#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_CTYPE,"spanish");
	
	string nombre="Admin";
	string password, password2;
	cout<<"Ingrese el nombre de cuenta a crear\n";
	getline(cin,nombre);
	do{
		cout<<"Ingrese una contraseņa debe ser mayor o igual a 8 caracteres: \n";
		cin>>password;
		system("cls");
		if(password.length() < 8 ){
			cout<<"La contraseņa no cumple los requisitos.\n";
		}
	}while(password.length() < 8);

	do{
		cout<<"Ingrese nuevamente la contraseņa: \n";
		cin>>password2;
		system("cls");
		if(password != password2){
			cout<<"Contraseņa invalida\n";
		}
	}while(password != password2);
	
	cout<<"Bienvenido a su cuenta Sr(a) "<<nombre;
		
	return 0;
}


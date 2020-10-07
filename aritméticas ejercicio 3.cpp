//Programa que lea de entrada la edad, el sexo y la altura y los muestre por consola.
#include<iostream>
using namespace std;

int main(){
	
	int edad=0;
	char sexo=0;
	float altura=0;
	
	cout<<"Por favor introduzca su edad: "; cin>>edad;
	cout<<"Por favor introduzca su sexo [M/F]: "; cin>>sexo;
	cout<<"Por favor introduzca su altura: "; cin>>altura;
	
	cout<<"Los datos introducidos son: "<<edad<<" años / "<<sexo<<" / "<<altura<<" cm";
	
	return 0;
}

#include<iostream>

using namespace std;

int main(){
	
	float nota1=0, nota2=0, nota3=0, media=0;
	
	cout<<"-----Calculador de media de notas-----"<<endl;
	cout<<"Introduzca la primera nota: "; cin>>nota1;
	cout<<"Introduzca la segunda nota: "; cin>>nota2;
	cout<<"Introduzca la tercera nota: "; cin>>nota3;
	
	media = (nota1 + nota2 + nota3)/3;
	
	cout.precision(2); //exactitud de la operación
	
	cout<<"El resultado es: "<<media<<endl;
	
	
	
}

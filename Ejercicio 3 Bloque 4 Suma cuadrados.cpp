//Programa que realiza y calcule la suma d elos cuadrados de los 10 primeros enteros

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int suma = 0, cuadrado;
	
	for(int i=1;i<=10;i++){
		cuadrado = i*i;
		suma = suma + cuadrado; //o suma += cuadrado
		
	}
	
	cout<<"El resultado de la suma es: "<<suma<<endl;
	
	getch();
	return 0;
}

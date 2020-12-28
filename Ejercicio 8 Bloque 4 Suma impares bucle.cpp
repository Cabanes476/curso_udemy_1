#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(){
	
	int nElementos, sumaTotal=0;
	
	cout<<"Introduzca el numero de elementos a sumar: "; cin>>nElementos;
	
	for(int i=1; i<=2*nElementos-1; i+=2){ //i+=2 por que solo son impares y para que sume de 2 en 2
		sumaTotal += i;
	}
	
	cout<<"La suma es: "<<sumaTotal<<endl;
	
	getch();
	return 0;
}

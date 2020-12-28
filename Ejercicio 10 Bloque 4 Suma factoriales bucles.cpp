#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main(){
	
	double nElementos, factorial =1, suma=0;
	
	cout<<"Introduzca el numero de elementos a sumar: "; cin>>nElementos;
	
	for(int i=1; i<=nElementos; i++){
		factorial = factorial * i;
		suma += factorial;
	}
	
	cout<<"\nLa suma de factoriales es: "<<suma<<endl;
	
	getch();
	return 0;
}

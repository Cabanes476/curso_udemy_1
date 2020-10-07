#include<iostream>

using namespace std;

int main(){
	
	float precio, precioiva=0, iva=0;
	
	cout<<"Introduzca el precio del producto: "; cin>>precio;
	
	iva = (precio/100)*21;
	precioiva = precio + iva;
	
	cout<<"\nEl precio del porducto con un 21% de iva es: "<<precioiva<<" euros"<<endl;
	
	return 0;
}

//La sentencia if

#include<iostream>
using namespace std;

int main(){
	
	int numero1, numero2, numero3, numero4, dato=5;
	
	cout<<"Introduzca un numero: "; cin>>numero1;
	
	if(numero1==dato){ //igualdad
		
		cout<<"El numero es 5"<<endl;
		
	}
	
	else{
		
		cout<<"El numero es direfente de 5"<<endl;
		
	}
	
	cout<<"Introduzca un numero: "; cin>>numero2;
	
	if(numero2!=dato){ //desigualdad
		
		cout<<"El numero es diferente de 5"<<endl;
		
	}
	
	else{
		
		cout<<"El numero es 5"<<endl;
		
	}
	
		cout<<"Introduzca un numero: "; cin>>numero3;
	
	if(numero3<dato){ //mayor que y menor que
		
		cout<<"El numero es menor de 5"<<endl;
		
	}
	
	else{
		
		cout<<"El numero es mayor a 5"<<endl;
		
	}
	
	return 0;
}

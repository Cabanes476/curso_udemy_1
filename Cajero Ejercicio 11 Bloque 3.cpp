#include<iostream>
using namespace std;

int main(){
	
	int saldo_inicial = 1000, opc;
	float extra, saldo = 0, retiro;
	
	cout<<"\tBienvenido a su cajero virtual"<<endl; 
	cout<<"1. Ingresar dinero en la cuenta."<<endl;
	cout<<"2. Retirar dinero de la cuenta."<<endl;
	cout<<"3. Salir "<<endl;
	cout<<"Opcion: "<<endl; cin>>opc;
	
	switch(opc){
		case 1: 
			
			cout<<"Introduzca la cantidad de dinero a ingresar:";
			cin>>extra;
			saldo = saldo_inicial + extra;
			cout<<"Dinero en cuenta: "<<saldo;
			break;
			
		case 2: 
		
			cout<<"Introduzca la cantidad de dinero a retirar: ";
			cin>>retiro;
			
			if(retiro > saldo_inicial){
				
				cout<<"NO dispone de ese dinero en su cuenta";
				
			}
			
			else{
				
				saldo = saldo_inicial - retiro;
				cout<<"Dinero en cuenta: "<<saldo<<endl;
			}
			
		case 3:
			
			break;
			
			return 0;
	}
}

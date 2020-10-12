#include<iostream>

using namespace std;

int main(){
	
	float n1, n2, n3, n4;
	
	cout<<"Introduce 3 numeros: "<<endl; cin>>n1>>n2>>n3;
	
	cout<<"Introduzca un cuarto numero: "; cin>>n4;
	
	if((n1==n4)||(n2==n4)||(n3==n4)){
		
		cout<<"El numero coincide con al menos 1 de los 3 numeros del principio."<<endl; 
		
	}
	
	else{
		
		cout<<"El numero no coincide con ninguno de los anteriores."<<endl;
	}
}

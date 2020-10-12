#include<iostream>
using namespace std;

int main(){
	
	int edad=0;
	
	cout<<"Introduzca su edad: "; cin>>edad;
	
	if((edad>=18)&&(edad<=25)){
		
		cout<<"La edad esta dentro de rango de 18 a 25 años";
		
	}
	
	else{
		
		cout<<"La edad introducida no se encuentra en el rango de 18 a 25 años.";
	}
}

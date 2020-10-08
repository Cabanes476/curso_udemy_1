#include<iostream>
#include<math.h>

//Calculadora de ecuaciones de 2º grado

using namespace std;

int main(){
	
	float a, b, c, resultado1=0, resultado2=0;
	
	cout<<"Introduzca el valor de a: "; cin>>a;
	cout<<"Introduzca el valor de b: "; cin>>b;
	cout<<"Introduzca el valor de c: "; cin>>c;
	
	resultado1 = (-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	resultado2 = (-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	
	cout<<"El resultado 1 es: "<<resultado1<<endl;
	cout<<"El resultado 2 es: "<<resultado2<<endl;
	
}

#import<iostream>

using namespace std;

int main(){
	
	float practicas=0, teoria=0, participacion=0, nota_final=0;
	
	cout<<"----- Calculadora de nota final -----"<<endl;
	cout<<endl;
	cout<<"| Teoria 60% // Practicas 30% // Participacion 10% |"<<endl;
	cout<<endl;
	cout<<"Ingrese su nota de Teoria: "; cin>>teoria;
	cout<<"Ingrese su nota de practicas: "; cin>>practicas;
	cout<<"Ingrese su nota de participacion: "; cin>>participacion;
	
	practicas *= 0.30;
	teoria *= 0.60;
	participacion *= 0.10;
	
	nota_final = practicas + teoria + participacion;
	
	cout<<endl;
	cout<<"La nota final de la asignatura es: "<<nota_final;
	
	return 0;
}


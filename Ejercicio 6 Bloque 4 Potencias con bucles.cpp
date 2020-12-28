#import<iostream>
#import<conio.h>
#import<stdlib.h>
using namespace std;

int main(){
	
	double x, y, elevado=1;
	
	cout<<"Introduzca el valor de x: "; cin>>x;
	cout<<"Introduzca el valor de x: "; cin>>y;
	
	for(int i=1;i<=y;i++){
		elevado = elevado * x;
	}
	
	cout<<"\n El resultado de la potencia es: "<<elevado<<endl;
	
	getch();
	return 0;
}

#import<iostream>
#import<conio.h>
#import<stdlib.h>
using namespace std;

int main(){
	
	double numero, factorial=1;
	
	cout<<"Introduzca un numero: "; cin>>numero;
	
	for(int i=1; i<=numero; i++){
		factorial = factorial * i;
	}
	
	cout<<"\n El factorial del numero es: "<<factorial<<endl;
	
	system("pause");
	return 0;
}

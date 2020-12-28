#import<iostream>
#import<conio.h>
using namespace std;

int main(){
	int n, suma=0;
	
	cout<<"Introduzca el numero de elementos: "; cin>>n;
	
	for(int i=1; i<=n;i++){
		suma += i;
	}
	
	cout<<"\n La suma es: "<<suma<<endl;
	
	getch();
	return 0;
}

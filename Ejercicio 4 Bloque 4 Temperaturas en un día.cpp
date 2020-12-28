#import<iostream>
#import<conio.h>
using namespace std;

int main(){
	
	float temperatura, mayor=0,menor=99999999;
	float sumaTotal, promedio;
	
	for(int i=0;i<24;i+=4){ //el uso de i+= en vez de i++ es por que la temperatura se toma cada 4 grados, es decir, cuenta de 4 en 4.
		cout<<"Digite la temperatura de la hora "<<i<<": ";
		cin>>temperatura;
		
		sumaTotal += temperatura;
		
		if(temperatura>mayor){
			mayor = temperatura; //24
		}
		if(temperatura<menor){
			menor = temperatura;
		}
	}
	
	promedio = sumaTotal/6;
	
	cout<<"Temperatura promedio: "<<promedio<<endl;
	cout<<"Temperatura mas alta: "<<mayor<<endl;
	cout<<"Temperatura mas baja: "<<menor<<endl;
	
	getch();
	return 0;
	
}

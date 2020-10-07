#import<iostream>
#import<math.h>

using namespace std;

int main(){
	
	float cateto1=0, cateto2=0, hipotenusa=0;
	
	cout<<"----- Calculadora de Hipotenusa de un triangulo rectángulo -----"<<endl;
	cout<<endl;
	cout<<"| Formula usada -> cat^2 + cat^2 = hip^2 |"<<endl;
	cout<<endl;
	cout<<"Ingrese la medida del primer cateto en cm: "; cin>>cateto1;
	cout<<"Ingrese la medida del segundo cateto en cm: "; cin>>cateto2;
	
	hipotenusa = sqrt(pow(cateto1, 2) +pow(cateto2, 2));
	
	cout.precision(2);
	
	cout<<endl;
	cout<<"La medida de la hipotenusa de el triangulo formado por los catetos "<<cateto1<<" y "<<cateto2<<" es: "<<hipotenusa<<" cm.";
	
	return 0;
}

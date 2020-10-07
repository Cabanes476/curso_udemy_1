//Un puntero es una variable que se va a almacenar en una direccion de memoria donde ya existe otra variable

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int num, *dir_num;
	
	num = 20;
	dir_num = &num;
	
	cout<<"Numero: "<<*dir_num<<endl;
	cout<<"Direccion de memoria: "<<dir_num<<endl;
	
	getch();
	return 0;
}

/*
Ejercicio 15: 
Lea un número que represente el día de la semana y diga que día es teniendo en cuenta
que la semana comienza en domingo
*/
#include <iostream> 
using namespace std;
int main(){
	
	int numero; 
	
	cout<<"Digite un numero: "; 
	cin>>numero;
	
	switch(numero){
	
	case 1: cout<<"\nEl dia es: Domingo."; break; 
	case 2: cout<<"\nEl dia es: Lunes."; break; 
	case 3: cout<<"\nEl dia es: Martes."; break; 
	case 4: cout<<"\nEl dia es: Miercoles."; break; 
	case 5: cout<<"\nEl dia es: Jueves."; break;
	case 6: cout<<"\nEl dia es: Viernes."; break; 
	default: cout<<"\nEl numero ingresado no es valido. "; break; 
	}
	return 0;
}


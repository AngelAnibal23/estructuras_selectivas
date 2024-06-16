/*
Ejercicio 16:
Un banco ha decidido aumentar el l�mite de cr�dito de las tarjetas de cr�dito de sus
cliente, para esto considera que si su cliente tiene tarjeta tipo 1, el aumento ser� del 25%;
si tiene tipo 2, ser� del 35%; si tiene tipo 3, de 40%, y para cualquier otro tipo, de 50%.
Genere un algoritmo donde se ingrese el tipo de tarjeta y el cr�dito actual, luego mostrar
el nuevo cr�dito aumentado.
*/
#include <iostream> 
using namespace std; 
int main(){
	
	int tipo_tarjeta, credito_actual; 
	
	cout<<"Ingrese el credito actual de su tarjeta: "; 
	cin>>credito_actual; 
	cout<<"\nSegun el tipo de su tarjeta digite: (1 , 2 , 3 , ...): "; 
	cin>>tipo_tarjeta; 
	
	if(tipo_tarjeta== 1){
		cout<<"\nEl nuevo credito aumentado es de: "<<credito_actual*(1+0.25); 	
	}
	else if (tipo_tarjeta== 2){	
		cout<<"\nEl nuevo credito aumentado es de: "<<credito_actual*(1+0.35); 
	}
	else if (tipo_tarjeta == 3){	
		cout<<"\nEl nuevo credito aumentado es de: "<<credito_actual*(1+0.4);
	}
	else if (tipo_tarjeta > 3){
		cout<<"\nEl nuevo credito aumentado es de: "<<credito_actual*(1+0.5); 	
	}
	else{
		cout<<"\nEl numero de tarjeta que ingreso, no es valido. "; 
		
		return 0;
	}
	
	return 0; 
}


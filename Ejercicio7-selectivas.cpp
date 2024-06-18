/*
Ejercicio 7: En una llantera se ha establecido una promoción de las llantas marca “Ponchadas”, dicha
promoción consiste en lo siguiente:
Si se compran menos de cinco llantas el precio es de $300 cada una, de $250 si se
compran de cinco a 10 y de $200 si se compran más de 10.
Obtener la cantidad de dinero que una persona tiene que pagar por cada una de las
llantas que compra y la que tiene que pagar por el total de la compra.
*/

#include <iostream> 
using namespace std; 
int main(){ 

	 int numero_llantas, precio_llantas, total; 
	 
	 	cout<<"Ingrese el numero de llantas que va a adquirir: "; 
	 	cin>>numero_llantas;  
	 	
	
	 		if(numero_llantas<5 && numero_llantas !=0 && numero_llantas>0){
	 		
	 		precio_llantas=300; 
	 		total=300*numero_llantas; 
	 		
	 		}
			else if(numero_llantas>=5 && numero_llantas<11 && numero_llantas>0){
			
			precio_llantas=250; 
			total=250*numero_llantas; 

			}
			else if (numero_llantas>10 && numero_llantas>0){
			
			precio_llantas=200; 
			total=200*numero_llantas; 
			
			}
			else{
				cout<<endl<<"El numero ingresado no es valido. "<<endl;
				return 1;  
			}
		
		cout<<"\nEl monto a pagar por cada una de las llantas es de: "<<precio_llantas<<"$."<<endl; 
		cout<<"\nEl monto total a pagar es de: "<<total<<"$."<<endl; 

	return 0; 
}

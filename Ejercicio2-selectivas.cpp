/*
Ejercicio 2: En un almac�n se hace un 20% de descuento a los clientes cuya compra supere los
S/.1000 �Cu�l ser� la cantidad que pagara una persona por su compra?
*/

#include <iostream> 
using namespace std; 
int main(){
	
	int compra, precio_descto, precio_normal;
	
		cout<<"Digite el monto de su compra: "; cin>>compra; 
		
	if(compra<0){
			cout<<endl<<"El monto ingresado no es valido. "; 
	}
	else{
	
		precio_descto= compra*(1-0.2); 
		
		precio_normal= compra*1; 
		
	if(compra>1000){
		cout<<"\nLe corresponde pagar el monto de: "<<precio_descto<<" soles."<<endl; 
	}
	else{
		cout<<"\nEl monto total a pagar es de: "<<precio_normal<<" soles."<<endl;
	}
	}
	
	
	
	return 0;
}

/*
Ejercicio 2: En un almacén se hace un 20% de descuento a los clientes cuya compra supere los
S/.1000 ¿Cuál será la cantidad que pagara una persona por su compra?
*/

#include <iostream> 
using namespace std; 
int main(){
	
	int compra, precio_descto, precio_normal;
	char letra; 
	
	
		cout<<"Digite el monto de su compra: "; cin>>compra; 
		
	if(compra<0){
			cout<<endl<<"El monto ingresado no es valido. "; 
	}
	else{
	
		precio_descto= compra*(1-0.2); 
		
		precio_normal= compra; 
		
	if(compra>1000){
		cout<<"\nLe corresponde pagar el monto de: S/."<<precio_descto<<endl; 
	}
	else{
		cout<<"\nEl monto total a pagar es de: S/."<<precio_normal<<endl;
	}
	}
	
	return 0;
}

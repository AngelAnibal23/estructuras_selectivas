/*
Ejercicio 13: 
Dados 3 longitudes diga si pueden formar un triangulo. Recuerde “En todo triangulo, cada
lado es menor que la suma de los otros dos, pero mayor que su diferencia”
*/ 
#include <iostream> 
using namespace std; 
int main(){
	
	int l1, l2, l3; 
	
	cout<<"Digite un lado del triangulo: "; 
	cin>>l1; 
	cout<<"Digite otro lado del triangulo: "; 
	cin>>l2; 
	cout<<"Digite el ultimo lado del triangulo: "; 
	cin>>l3;
	
	if(l3<l1+l2 && l3>l1-l2){
		
		cout<<"Las longitudes brindadas, si pueden formar un triangulo."; 
		
	}
	else{
		cout<<"Las longitudes brindadas, no pueden formar un triangulo."; 
	}
	
	
	return 0; 
}

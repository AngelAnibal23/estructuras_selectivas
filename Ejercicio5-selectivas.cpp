/*
Ejercicio 5: Calcular el número de pulsaciones que debe tener una persona por cada 10 segundos de
ejercicio aeróbico; la fórmula que se aplica es:
cuando el sexo es femenino : num. pulsaciones = (220 - edad)/10
y si el sexo es masculino : num. pulsaciones = (210 - edad)/10
*/

#include <iostream>
using namespace std; 
int main(){
	
	double num_pulsaciones; 
	int edad;   
	char sexo; 
	
	cout<<"Ingrese su edad: "; cin>>edad;
	
	if(edad<0){
		cout<<endl<<"La edad ingresada no es valida. "; 
		
		return 1; 
	}
	
	cout<<"Ingrese su sexo (m para masculino y f para femenino): "; cin>>sexo;  
	
	
	if(sexo == 'm' ||  sexo== 'M'){
		
		num_pulsaciones= (210-edad)/10; 
	}
	else if (sexo == 'f' || sexo== 'F'){
	
		num_pulsaciones= (220-edad)/10;
	}
	else{ 
		cout<<"\nEl sexo ingresado no es valido. "; 
		
		return 0; 
	}
	
	cout<<"\nEl numero de pulsaciones por cada 10 segundos correspondiente es de: "<<num_pulsaciones<<" pulsaciones."<<endl;  	
	
	
	return 0; 
}


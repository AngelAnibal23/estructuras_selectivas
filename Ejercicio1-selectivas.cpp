/*
Ejercicio 1: Determinar si un alumno aprueba o reprueba un curso, sabiendo que aprobara si su
promedio de tres calificaciones es mayor o igual a 70; reprueba en caso contrario.
*/
#include <iostream> 
#include <stdio.h>
using namespace std; 

	int main(){
		
		int nota1, nota2, nota3, promedio;
		string v; 
		do{
		cout<<"Digite su primera calificacion: "; cin>>nota1; 
		cout<<"Digite su segunda calificacion: "; cin>>nota2; 
		cout<<"Digite su tercera calificacion: "; cin>>nota3; 
		
		if(nota1<0 || nota2<0 || nota3<0){
			cout<<"La nota ingresada es invalida. "; 	
		}
		else{
	
		promedio=(nota1+nota2+nota3)/3; 
		
		if (promedio>=70){
			cout<<"\nUsted aprobo. "<<endl;
 	    }
		else{
			cout<<"\nUsted desaprobo. "<<endl; 
	    }
		}
		cout<<"volver a revisar? si o no"<<endl;
		cin>>v;
		}while (v=="si");
		return 0;
	}


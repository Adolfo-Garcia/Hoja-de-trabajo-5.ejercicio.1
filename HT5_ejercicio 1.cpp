/*Ejercicio # 1 Realice un programa que genere la venta de compra de un terreno/casa/departamento. 
Este programa debe realizar los cálculos de acuerdo con la tabla abajo listada: 
 
Dada la categoría, zona, tipo y el área del terreno o inmueble determine a cuánto asciende el 
monto que deberá pagar para comprar el inmueble. El programa desarrollado deberá de ser capaz de generar 
un reporte de el total vendido por categoría, zona y tipo de inmueble. 

*/


#include <iostream>
#include <fstream>

using namespace std;


int main(){
	char categoria;
	char tipo;
	char zona;
	float precio;
	float total;
	int n,i,ops;
	
		cout<<"CUANTOS INMUEBLES COMPRARA"<<endl;
		cin>>n;
		
		for(i=1;i<=n;i++){
		
			cout<<"-------------------------------"<<endl;
			cout<<"SELECCIONES QUE CATEGORIA DESEA"<<endl;
			cout<<"1 COMERCIAL  "<<endl;
			cout<<"2 RESIDENCIAL"<<endl;
			cin>>ops;
			cout<<"-------------------------------"<<endl;
			 if (ops==1){
			
			 	cout<<"SELECCIONE LA ZONA (A) (B)"<<endl;
			 	cin>>zona;
			 	zona = toupper(zona);
			 	if(zona=='A')
				cout<<"------------------------------------------"<<endl;
			 	cout<<"SELECCIONE EL TIPO DE INMUEBLE A COMPRAR"<<endl;
			 	cout<<" (T)ERRENO     "<<endl;
			 	cout<<" (C)ASA        "<<endl;
			 	cout<<" (D)EPARTAMENTO"<<endl;
			 	cin>>tipo;
			 	cout<<"------------------------------------------"<<endl;
			 	tipo= toupper(tipo);
				
				if(tipo=='T')
				
					total=2200;
					 if(tipo=='C')
					total=2500;
					else if(tipo=='D')
					total=2100;
		
					 if(zona=='B'){
					 	if(tipo=='T')
						total=1300;
					 	if(tipo=='C')
						total=1500;
						else if(tipo=='D')
						total=1200;
				}	
				system("cls");
				}
					if(ops==2){
				cout<<"SELECCIONE LA ZONA (A) (B) (C)"<<endl;
			 	cin>>zona;
			 	zona = toupper(zona);
			 	if(zona=='A')
			 	cout<<"SELECCIONE EL TIPO DE INMUEBLE A COMPRAR"<<endl;
			 	cout<<" (T)ERRENO     "<<endl;
			 	cout<<" (C)ASA        "<<endl;
			 	cout<<" (D)EPARTAMENTO"<<endl;
			 	cin>>tipo;
			 	tipo= toupper(tipo);
				if(tipo=='T'){	
					total=2100;
					 if(tipo=='C')
					total=2500;
					else if(tipo=='D')
					total=2100;
			}
					if(zona=='B'){
						if(tipo=='T')
						total=1500;
					 	if(tipo=='C')
						total=1600;
						else if(tipo=='D')
						total=1300;
					}
						if(zona=='C'){
							if(tipo=='T')
							total=1100;
						 	if(tipo=='C')
							total=1300;
							else if(tipo=='D')
							total=1000;
					}
				
			}
							
							//cout<<"EL TOTAL A PAGAR ES: "<<total<<endl;;
}

	cout<<"EL TOTAL A PAGAR ES: "<<total<<endl;;
	return 0;
}


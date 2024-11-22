#include <iostream> 
#include <fstream>
#include <string>

using namespace std; 

int main(){	
     string ruc, producto; 
	 ofstream archivo; 
	 int unidades; 
	 double precio, neto, total, igv; 
	 char aux; 
		
	 archivo.open("output.txt"); 
	 
	 cout<<" Ruc del cliente (X para terminar): "; 
	 cin>>ruc; 
	 
	 	while(ruc != "X"){
	 		cin.get(aux); 
	 		cout<<" Producto: "; 
	 		getline(cin, producto); 
	 		cout<<" Unidades: "; 
	 		cin>>unidades; 
	 		cout<<" Precio: "; 
	 		cin>>precio; 
	 		
	 		archivo << ruc << " " << unidades <<" "<< precio << " " << producto << endl; 
	 		
	 		cout << "RUC del cliente (X para terminar): "; 
	 		cin>>ruc; 
	 }
			 
		archivo << "X "; 
		archivo.close(); 
	
	 
	return 0; 
}
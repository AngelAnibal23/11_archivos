#include <iostream> 
#include <fstream>
#include <string>
#include <iomanip>
using namespace std; 

int main(){	
     const int IGV = 18; 
     string ruc, producto; 
	 ifstream archivo; 
	 int unidades, count = 0; 
	 double precio, neto, total, igv; 
	 char aux; 
		
	 archivo.open("compras.txt"); 
	 
	 if(archivo.is_open()){
	 	archivo>>ruc; 
	 		while(ruc != "X"){
	 			archivo>> unidades >> precio;
				archivo.get(aux); 
	 			getline(archivo, producto);  
	 			count++; 
	 			neto = unidades * precio; 
	 			igv = neto * IGV/100; 
	 			total = neto + igv; 
	 			cout << "Compra "<< count << ".-" <<endl;
	 			cout << "   " << producto << ": " << unidades <<" x " << fixed << setprecision(2) << precio << " = " << neto << " - I.G.V. :" << igv << " - Total: " << total <<endl; 
	 			
	 			archivo >> ruc; 
	 
			 }
			 
		archivo.close(); 
	 }
	 else{
	 	cout<<" ERORR : No se ha podido abrir el archivo: " << endl; 
	 }
	 
	return 0; 
}
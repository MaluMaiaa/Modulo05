#include <iostream>
#include "hash.h" 

using namespace std;

int main(){
  Hash clienteHash(10);
   int   imeis[7]   = {
     12704, 31300, 1234,
     49001, 52202, 65606,
     91234};
  string logins[7] = {
    "pedrosouza", "raul66", "pauloalmeida",
    "ca", "lucassilva", "maria",
    "samanta123"}; 
	    
  for (int i = 0; i < 7; i++) {
    Cliente cliente = Cliente(imeis[i], logins[i]);
    clienteHash.insertItem(cliente);
  }
  clienteHash.print();  
  cout << "------------------------------" <<  endl;
  
  Cliente cliente(12704,"");  
  bool     found = false;
  clienteHash.retrieveItem(cliente, found);
  cout << cliente.getLogin() << " -> " << found << endl;
  
  cout << "------------------------------" <<  endl;

  clienteHash.deleteItem(cliente);
  clienteHash.print();
  cout << "Fim" << endl;  
}


#include <iostream>
using namespace std;

int main() {
  float  n, inverso;
  int repetir = true ;

do{
    
    cin >> n;
    inverso = n*(-1);
    cout << inverso << endl;
   
    }
    
    

 while ( repetir) ;{
    cout << "Digite 1 para continuar e 0 para encerrar" << endl;
    cin >> repetir ;

  return 0;
}
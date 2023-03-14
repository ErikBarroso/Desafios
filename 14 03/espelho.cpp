#include <iostream>
using namespace std;

int main() {
  float  n, inverso;
  int repetir = true ;

if( n != 0) {

while ( repetir)
{
    cin >> n;
    if( n > 0) {
    inverso = n*(-1);
} else if ( n < 0) {
    inverso = n*(-1);
}
   cout << inverso << endl;
   cout << "Digite 1 para continuar e 0 para encerrar" << endl;
   cin >> repetir ;
   
 }
    
}
   
  return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    bool repetir = true;
   
    while ( repetir ){ 
      cin >> n;
      if(n != 0){       
         cout << n*-1 << endl;  
      }else{
        repetir = false;
      }     
}
   
  return 0;
}
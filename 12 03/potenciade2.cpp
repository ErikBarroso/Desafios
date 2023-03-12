#include <iostream>
using namespace std;


int main()
{
    int n;
    int resultado = 1 ;

    cin >> n;

    if ( n >= 2 && n <= 30){
    for (int i = 0; i < n; i++)
    {        
        
      resultado = resultado * 2;
        
    }
    cout << resultado << endl;5
    } 
    
  
    return 0;
}

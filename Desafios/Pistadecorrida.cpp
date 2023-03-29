#include <iostream>
using namespace std;

int main()
{
    int MetrosDaCorrida, TamanhoDaPista, x;
    cin >> MetrosDaCorrida >> TamanhoDaPista;

    x = MetrosDaCorrida / TamanhoDaPista;
    cout << MetrosDaCorrida - (x * TamanhoDaPista) ;
    
   
    return 0;
}

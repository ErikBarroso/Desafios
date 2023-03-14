#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int salto, distancia;
    cin >> distancia >> salto;

    int resultado = distancia / salto;

    if( distancia % salto != 0){

       resultado++;
    }
    cout << resultado  << endl;
    return 0;
}

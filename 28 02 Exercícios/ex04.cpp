#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int n1, n2;
    float n3, produto, soma, cubo;

    cout << "Digite tres numeros:" ;
    cin >> n1 >> n2 >> n3 ; 
    produto = (n1*2) * (n2/2);
    soma = (n1*3) + n3;
    cubo = pow(n3,3) ; 
    cout << "O produto do dobro do primeiro com metade do segundo eh:" << produto << endl;
    cout << "a soma do triplo do primeiro com o terceiro eh:" << soma << endl;
    cout << "o terceiro elevado ao cubo eh:" << cubo << endl;




    
    system("pause");
    return 0;
}

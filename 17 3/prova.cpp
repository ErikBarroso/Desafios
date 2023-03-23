#include <iostream>
using namespace std;

#define type float

int main()
{
    
    int QuantidadeDeNumerosDaSequencia, sequencia, ;
    cin >> QuantidadeDeNumerosDaSequencia; 

    int numeros [QuantidadeDeNumerosDaSequencia];
    

    for (int i = 0; i < QuantidadeDeNumerosDaSequencia  ; i++) {
        cin >> numeros[i];
    }

    
    system("pause");
    return 0;
}

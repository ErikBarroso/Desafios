#include <iostream>
using namespace std;

int main()
{
    int numero1 = 5, numero2 = 4, soma, subtracao, multiplicacao, modulo;
    float divisao;
    
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = (float)numero1 / numero2;
    modulo = numero1 % numero2;

    cout << "A soma eh:"  << soma << endl;
    cout << "A subtracao eh:"  << subtracao << endl;
    cout << "A multiplicacao eh:"  << multiplicacao << endl;
    cout << "A divisao eh:"  << divisao << endl;
    cout << "O modulo eh:"  << modulo << endl;

    
    system("pause");
    return 0;
}

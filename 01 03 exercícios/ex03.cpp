#include <iostream>
using namespace std;

int main()
{
    float peso, multa, excesso;

    cout << "Digite o peso do peixe:" ;
    cin >> peso;

    excesso = peso - 50;
    multa = excesso * 4;

    cout << "O excesso eh:" << excesso << endl;
    cout << "Portanto, o valor da multa eh:" << multa << endl;

    
    system("pause");
    return 0;
}

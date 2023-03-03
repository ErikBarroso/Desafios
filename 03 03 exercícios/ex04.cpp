#include <iostream>
using namespace std;

int main()
{
    int valor;

    cout << "Digite o numero ";
    cin >> valor;

    if (valor > 0){
        cout << "O numero e posisito" << endl;

    } else {
        cout << "O numero e negativo" << endl;
    }

    
    system("pause");
    return 0;
}

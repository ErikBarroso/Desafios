#include <iostream>
using namespace std;

int main()
{
    char letra;
    
    cout << "Digite F para Feminino ou M Masculino: ";
    cin >> letra;
    if (letra == 'F'){
        cout << "Feminino" << endl;
    } else if (letra == 'M' ){
        cout << "Masculino" << endl;
    } else {
        cout << "Sexo invalido" << endl;
    }

    
    system("pause");
    return 0;
}

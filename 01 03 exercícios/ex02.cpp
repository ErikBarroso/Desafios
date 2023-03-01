#include <iostream>
using namespace std;

int main()
{
    float altura, pesoHomem, pesoMulher;

    cout << "Digite a altura:" ;
    cin >> altura;
    pesoHomem = (72.7*altura) - 58;
    pesoMulher = (62.1*altura) - 44.7;

    cout << "O peso ideal para uma pessoa do sexo masculino eh:" << pesoHomem << endl;
    cout << "O peso ideal para uma pessoa do sexo femino eh:" << pesoMulher << endl;
    
    system("pause");
    return 0;
}

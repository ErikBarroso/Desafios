#include <iostream>
using namespace std;

int main()
{
    float ganhoHora, horasTrabalhadas, salario;

    cout << "Digite o quanto voce ganha por hora:" ;
    cin >> ganhoHora;
    cout << "Digite quantas horas voce trabalhou esse mes:" ;
    cin >> horasTrabalhadas;
    salario = ganhoHora * horasTrabalhadas;
    cout << "Seu salario esse mes eh: R$" << salario << endl; 
    
    system("pause");
    return 0;
}

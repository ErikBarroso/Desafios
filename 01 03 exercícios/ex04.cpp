#include <iostream>
using namespace std;

int main()
{
    float valorHora, horasTrabalhadas, salarioTotal, impostoDeRenda, INSS, sindicato, salarioLiquido;

    cout << "Digite quanto voce ganha por hora:";
    cin >> valorHora;
    cout << "Digite quantas horas voce trabalhou no mes:" ;
    cin >> horasTrabalhadas;


    salarioTotal = valorHora * horasTrabalhadas;
    impostoDeRenda = salarioTotal * 0.11;
    INSS = salarioTotal * 0.08;
    sindicato = salarioTotal * 0.05;
    salarioLiquido = salarioTotal - INSS - sindicato - impostoDeRenda;

    cout << "Salario total bruto eh:" << salarioTotal << endl;
    cout << "Desconto do Imposto de Renda:" << impostoDeRenda << endl;
    cout << "Desconto do INSS:" << INSS << endl;
    cout << "Desconto do Sindicato:" << sindicato << endl;
    cout << "Salario Liquido:" << salarioLiquido << endl;


    
    system("pause");
    return 0;
}

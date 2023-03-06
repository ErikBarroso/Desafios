#include <iostream>
using namespace std;

int main()
{
    //Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.
    float produto1, produto2, produto3;
    cout << "Digite o valor do primeiro produto: ";
    cin >> produto1;
    cout << "Digite o valor do segundo produto: ";
    cin >> produto2;
    cout << "Digite o valor do terceiro produto: ";
    cin >> produto3;

    if(produto1 < produto2 && produto1 < produto3){
        cout << "O produto um eh o mais barato, e custa R$" << produto1 << endl;
    } else if(produto2 < produto1 && produto2 < produto3){
        cout  << "O produto dois eh o mais barato, e custa R$" << produto2 << endl;
    } else {
        cout << "O produto tres eh o mais barato, e custa R$"<<  produto3 << endl;
    }
    
    system("pause");
    return 0;
}

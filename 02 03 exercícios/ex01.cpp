#include <iostream>
#include   <math.h>
using namespace std;

int main()
{
     
    float areadaParede, rendimentoTinta = 3, quantidadeDeLitros, latas = 18, quantidadeDeLatas, precoDaLata = 80, valorTotal ;

    cout << "Digite o tamanho em metros quadrados da area a ser pintada:";
    cin >> areadaParede;

    quantidadeDeLitros = areadaParede / rendimentoTinta; 
    quantidadeDeLatas = ceil (quantidadeDeLitros / latas);
    valorTotal = quantidadeDeLatas * precoDaLata;

    cout << "Quantidade de litros:" << quantidadeDeLitros << endl;
    cout << "Quantidade de Latas a serem compradas eh:" << quantidadeDeLatas << endl;
    cout << "Valor Total: R$" << valorTotal<< endl;





    
    system("pause");
    return 0;
}

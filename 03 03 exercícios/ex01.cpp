#include <iostream>
#include   <math.h>
using namespace std;

int main()
{
     float areadaParede, rendimentoTinta = 6, quantidadeDeLitros, latas = 18, quantidadeDeLatas, quantidadeDeGaloes, precoDaLata = 80, valorTotalLatas, valorTotalGalao, maisBarato, galao = 3.6, precoGalao = 25 ;

    cout << "Digite o tamanho em metros quadrados da area a ser pintada:";
    cin >> areadaParede;

    quantidadeDeLitros = areadaParede / rendimentoTinta;

    quantidadeDeLatas = ceil (quantidadeDeLitros / latas);
    valorTotalLatas = quantidadeDeLatas * precoDaLata;

    quantidadeDeGaloes = ceil(quantidadeDeLitros / galao);
    valorTotalGalao = quantidadeDeGaloes * precoGalao;

    cout << "Voce precisa de: " << quantidadeDeLitros << " Litros " << endl;
    cout << "Se for comprar em latas, vai gastar R$ " << valorTotalLatas << " por " << quantidadeDeLatas << " latas ." << endl;

    cout << "Ou, voce precisa de: " << quantidadeDeGaloes << " Galoes" << endl;
    cout << "E vai gastar R$ " << valorTotalGalao << " por " << quantidadeDeGaloes << " galoes. " << endl;
    
    system("pause");
    return 0;
}

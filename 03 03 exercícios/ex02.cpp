#include <iostream>
#include   <math.h>
using namespace std;

int main()
{
    float tamanhoDoArquivo, velocidadeDaInternet, tempodeDownload;

    cout << "Digite o tamanho do arquivo em MB ";
    cin >> tamanhoDoArquivo;
    cout << "Digite a velocidade de internet em Mbps " ; 
    cin >> velocidadeDaInternet;

    tempodeDownload = ceil (tamanhoDoArquivo / (velocidadeDaInternet/8)) / 60;

    cout << "Vai demorar aproxidamente " << tempodeDownload << " minutos para concluir o download." << endl;
    
    system("pause");
    return 0;
}

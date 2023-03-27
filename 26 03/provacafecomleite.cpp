#include <iostream>
using namespace std;

int main()
{
    int quantidadeDeNumeros, subsequencia = 0, maior = 0;
    cin >> quantidadeDeNumeros;

    int sequenciaDeNumeros[quantidadeDeNumeros];

    for(int i = 0; i < quantidadeDeNumeros; i++){
        cin >> sequenciaDeNumeros[i];

    }

    for(int i = 0; i < quantidadeDeNumeros; i++){

        if(sequenciaDeNumeros[i] > sequenciaDeNumeros[i-1] ) {

            maior++;

            if(maior >= subsequencia){
                subsequencia = maior;
            }         
            
        }  else{
                maior = 1;
            }  
    }
    
    
    cout << subsequencia << endl;


    return 0;
}
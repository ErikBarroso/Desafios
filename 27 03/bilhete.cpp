#include <iostream>
using namespace std;

int main()
{
    int quantidadeDePessoas, bilhetePremiado, contador = 0;
    
    cin >> quantidadeDePessoas;    
    
    int bilhete[quantidadeDePessoas];

    bool encontrei = false;

    for(int i = 0; i < quantidadeDePessoas; i++){
        cin >> bilhete[i];
               
    }

    cin >> bilhetePremiado;    

    for ( int i = 0; i < quantidadeDePessoas; i++){

        if(bilhete[i] != bilhetePremiado){
        contador++;

        } else {
            cout <<  "Número da poltrona do vencedor: " << contador << endl;
            encontrei = true;
            break;       
        }   
        
}     if (!encontrei){
        cout << "Não há vencedor" << endl; 
        }  

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int quantidadeDePessoas, bilhetePremiado;
    
    cin >> quantidadeDePessoas;
    cin >> bilhetePremiado;

    int bilhete[quantidadeDePessoas];

    for(int i = 0; i < quantidadeDePessoas; i++){
        cin >> bilhete[i];  
    }          

    if(bilhete[i] == bilhetePremiado){
        cout <<  "Número da poltrona do vencedor: " << bilhete[i] << endl;
       
    } 
    else {
        cout << "Não há vencedor" << endl;
    } 

    
   
    return 0;
}

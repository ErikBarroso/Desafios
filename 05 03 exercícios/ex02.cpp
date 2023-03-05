#include <iostream>
using namespace std;

int main()
{
    float nota1, nota2, media;

    cout << "Digites duas notas ";
    cin >> nota1 >> nota2;
    media = (nota1 + nota2) / 2;

    
    if (media == 10){
        cout << "Aprovado com Distincao" << endl;
    } else if (media >= 7)
    {
       cout << "Aprovado" << endl;
    } else{
        cout << "Reprovado" << endl;
    } 
    system("pause");
    return 0;
}

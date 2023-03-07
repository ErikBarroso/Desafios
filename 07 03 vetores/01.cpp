#include <iostream>
using namespace std;

int main()
{
    int tamanho;
cout << "Digite quantas notas você quer armazenar" << endl;
cin >> tamanho;

float notas[tamanho];

for (int i=0; i < tamanho; i++){
		cin >> notas[i];
}
cout << "Você digitou: ";
for (int i=0; i < tamanho; i++){
		cout <<  notas[i] << " ";
}
cout << endl;
    
    system("pause");
    return 0;
}

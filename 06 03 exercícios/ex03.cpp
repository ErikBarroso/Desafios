#include <iostream>
using namespace std;

int main()
{
    //Faça um Programa que leia três números e mostre-os em ordem decrescente.

    float n1,n2,n3;
    cout << "Digite tres numeros: ";
    cin >> n1 >> n2 >> n3;

    if(n1 < n2 && n1 < n3 && n2 < n3){
        cout << n1 << endl << n2 << endl << n3 << endl;
    } else if (n1 < n2 && n1 < n3 && n3 < n2){
        cout << n1 << endl << n3 << endl << n2 << endl;
    } 

    else if (n2 < n1 && n2 < n3 && n1 < n3){
        cout << n2 << endl << n1 << endl << n3 << endl;
    } else if (n2 < n1 && n2 < n3 && n3 < n1){
        cout << n2 << endl << n3 << endl << n1 << endl;
    }

    else if (n3 < n1 && n3 < n2 && n1 < n2){
        cout << n3 << endl << n1 << endl << n2 << endl;
    } else if(n3 < n1 && n3 < n2 && n2 < n1) {
        cout << n3 << endl << n2 << endl << n1 << endl;
    } else {
        cout << "algo errado" << endl;
    }
    
    system("pause");
    return 0;
}

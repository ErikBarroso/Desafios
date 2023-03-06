#include <iostream>
using namespace std;

int main()
{
    //Faça um Programa que leia três números e mostre o maior e o menor deles.
    float n1, n2, n3;
    cout << "Digite tres numeros: ";
    cin >> n1 >> n2 >> n3;

    if (n1 > n2 && n1 > n3 && n2 < n3){
        cout << n1 << " eh o maior " << n2 << " eh o menor" << endl;

    } else if (n1 > n2 && n1 > n3 && n3 < n2) {
        cout << n1 << " eh o maior " << n3 << " eh o menor " << endl;
    } 
    else if (n2 > n1 && n2 > n3 && n1 < n3){
        cout << n2 << " eh o maior " << n1 << " eh o menor" << endl;

    } else if (n2 > n1 && n2 > n3 && n3 < n1) {
        cout << n2 << " eh o maior " << n3 << " eh o menor" << endl;
    }
     else if (n3 > n1 && n3 > n2 && n1 < n2){
        cout << n3 << " eh o maior " << n1 << " eh o menor" << endl;

    } else if (n3 > n1 && n3 > n2 && n2 < n1) {
        cout << n3 << " eh o maior " << n2 << " eh o menor" << endl;
    }
    

    
    system("pause");
    return 0;
}

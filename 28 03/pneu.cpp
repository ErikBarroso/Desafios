#include <iostream>
using namespace std;

int main()
{
    int pressaoDesejada, pressaoLida;

    cin >> pressaoDesejada;
    cin >> pressaoLida;

   if(pressaoDesejada <= 40 && pressaoLida <= 40){
    cout << pressaoDesejada - pressaoLida << endl;
    }
       return 0;
}

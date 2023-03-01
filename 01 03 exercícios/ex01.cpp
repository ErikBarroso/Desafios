#include <iostream>
using namespace std;

int main()
{
    float altura, peso; 

    cout << "digite sua altura:" ;
    cin >> altura;
    peso = (72.7*altura) - 58 ;
    cout << "Seu peso ideal eh:" << peso << endl;
    
    system("pause");
    return 0;
}

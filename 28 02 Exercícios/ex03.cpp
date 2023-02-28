#include <iostream>
using namespace std;

int main()
{
    float farenheit, celsius;

    cout << "Digite a temperatura em celsius:";
    cin >> celsius ; 
    farenheit = (celsius *9 / 5) + 32 ;
    cout << farenheit << endl;
    
    system("pause");
    return 0;
}

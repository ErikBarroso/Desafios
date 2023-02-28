#include <iostream>
using namespace std;

int main()
{
    float farenheit, celsius;

    cout << "Digite a temperatura em farenheit:";
    cin >> farenheit ; 
    celsius = (5*(farenheit-32) / 9);
    cout << celsius << "º" << endl;
    
    system("pause");
    return 0;
}

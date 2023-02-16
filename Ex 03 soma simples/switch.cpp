#include <iostream>
using namespace std;

int main()
{
    int idade = 28;

    switch (idade){
        case 25:
            cout << "Laranja "<< endl;
            break;
        case 18:
            cout << "Azul" << endl;
            break;
        default:
        cout << "nem uma cor" << endl;
        break;

   
    }
    return 0;
}

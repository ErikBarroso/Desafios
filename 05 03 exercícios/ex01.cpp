#include <iostream>
using namespace std;

int main()
{
    char letra;

    cout << "Digita a letra: ";
    cin >> letra;

    if (letra == 'a'|| letra == 'e' || letra == 'i'||letra == 'o'||letra == 'u')
    {
       cout << "Essa letra eh uma vogal" << endl;
    } else
    {
        cout << "Essa letra eh uma consoante" << endl;
    }
    
    
    
    system("pause");
    return 0;
}

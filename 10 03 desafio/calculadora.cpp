#include <iostream>
using namespace std;
#include <iomanip>;

int main()
{
    char operacao; 
    float a, b, resultado;

    cin >> operacao >> a >> b;

    if (operacao == '+'){
        
        cout << a + b << endl;
    } else if (operacao == '-'){

        cout << a - b << endl;
    } else if (operacao == '/' && b != 0){
        cout << fixed << setprecision (1);
        cout <<  a / b << endl;
    } else if (operacao == '*'){
        cout << a * b << endl;
    }
    

    
    system("pause");
    return 0;
}

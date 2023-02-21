#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    bool continua = false;
    do{
        cout << "digite as 3 notas do aluno" << endl;
        cin >> a >> b >> c;
        cout << "a média é:" << (a+b+c)/3 << endl;

        cout <<"Digite 1 para continuar ou 0 para encerrar" << endl;
        cin >> continua;
    } while (continua);
    
    
    system("pause");
    return 0;
}

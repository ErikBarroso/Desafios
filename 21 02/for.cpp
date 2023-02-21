#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    for (int i = 1; i <= 30; i++)
    {
        cout << "digite as 3 notas do aluno" << i << endl;
        cin >> a >> b >> c;
        cout << "a média é:" << (a+b+c)/3 << endl;
    }
    

    
    system("pause");
    return 0;
}

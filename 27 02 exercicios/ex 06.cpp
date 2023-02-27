#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a,r,d;

    cout << "Digite a altura do quadrado:";
    cin >> a; 
    r = pow(a,2);
    d = r*2;
    cout << "A area eh:" << r << endl ;
    cout << "E o dobro da area eh:" << d << endl;
    
    system("pause");
    return 0;
}

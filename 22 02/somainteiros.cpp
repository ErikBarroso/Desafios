#include <iostream>
using namespace std;

int main()
{
 int n, x, resultado=0;
  cin >> n;  
  for (int i = 0; i < n; i++){
        cin >> x;
        resultado = resultado + x;       
}
   cout<< resultado << endl;
    system("pause");
    return 0;
}
//(int n = 1; n <= 100; n++)

#include <iostream>
using namespace std;

int main()
{
 int n = 50, x = 5000, resultado=0;
  cin >> n;  
  for (int i = 0; i <= n; i++){
        cin >> x;
        resultado += x;       
}
   cout<< "O Resultado é:"<< resultado << endl;
    system("pause");
    return 0;
}
//(int n = 1; n <= 100; n++)

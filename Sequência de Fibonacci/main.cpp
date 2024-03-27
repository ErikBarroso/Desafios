#include <iostream>
using namespace std;

int main()
{
  int primeiro =0 , segundo = 1 , proximo = 1;

  for(int i =0; i <100; i++) {
    cout << proximo << endl;
    proximo = segundo + primeiro;
    primeiro = segundo;
    segundo = proximo;
  }

  return 0 ;
}
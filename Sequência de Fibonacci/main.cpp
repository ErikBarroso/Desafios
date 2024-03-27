#include <iostream>
using namespace std;

int main() {
int primeiro = 0, segundo = 1, proximo = 0;

for(int i = 0 ; i<100; i++) {
  cout << proximo << endl;
  proximo = primeiro + segundo;
  primeiro = segundo;
  segundo = proximo;
}

return 0;
}

// Escreva uma função para gerar os primeiros '100' números da sequência de Fibonacci
// somar cada numero com o numero que antecede
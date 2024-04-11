// Dada uma string, determine se ela é um palíndromo.

// Exemplos:

// Entrada: "ovo"

// Saída: True

// Entrada: "banana"

// Saída: False

// Requisitos:

// A solução deve ser eficiente em termos de tempo e espaço.
// Explique seu raciocínio e a complexidade da sua solução.
// Dicas:

// Você pode converter a string para uma lista e verificar se a lista é igual à sua versão reversa.
// Você pode usar um ponteiro para o início e outro para o fim da string e verificar se os caracteres em cada posição são iguais.

#include <iostream>
#include <string>
using namespace std;

bool isPolindromo(string s){
  int primeiro = s.size() -1;
  int segundo = 0;
  for (; segundo < primeiro;){
    if (s[primeiro] != s[segundo]){
      cout << "Nao";
      return 0;
    } else {
      primeiro--;
      segundo++;
    }
  }
  cout << "Sim";
  return 1;
};

int main(){

  isPolindromo("ovo");
  return 0;
}
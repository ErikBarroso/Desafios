#include <iostream>
using namespace std;

int buscarNumero(int numero, int lista[], int tamanhoDaLista) {
  for (int i = 0; i < tamanhoDaLista; i++) {
    if (numero == lista[i]) {
      cout << "Temos o numero: " << numero << " na posicao " << i << endl;
      return 0;
    } 
  }
  cout << "O numero " << numero << " nao foi encontrado na lista." << endl;
  return 0;
}

int main () {
  int lista[] = {1, 5, 4, 3, 2, 10, 12};
  int tamanhoDaLista = sizeof(lista) / sizeof(int);

  buscarNumero(4, lista, tamanhoDaLista);
}

// Escreva uma função para realizar uma pesquisa binária em uma lista ordenada
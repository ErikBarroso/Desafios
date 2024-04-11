#include <iostream>
using namespace std;

bool buscarLinear(int numero, int lista[], int tamanhoDaArray){
  int esquerda = 0;
  int direta = tamanhoDaArray-1;
  int meio =0;

  for(int i = 0; esquerda <= direta; i++) {
    meio = (direta + esquerda) /2;
    if(numero == lista[meio]) {
      cout << "o numero: " << numero << " esta na posicao: " << meio << endl;
      return meio;
    }
    else if (numero > lista[meio]) {
      esquerda = meio+1;
    } else {
      direta = meio-1;
    }
  }
  cout << "Não achamos";
  return false;
}

main () {

  int lista[] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
  int tamanhoDaArray = sizeof(lista) / sizeof(int);

  buscarLinear(5, lista, tamanhoDaArray);

      return 0;
}
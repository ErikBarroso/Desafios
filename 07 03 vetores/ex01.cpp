#include <iostream>
using namespace std;

int main() {
  
  int quantidadeDeMatriculas;
  cout << "Digite a quantidade de matriculas ";
  cin >> quantidadeDeMatriculas;

  int matriculas [quantidadeDeMatriculas];

  for (int i = 0; i < quantidadeDeMatriculas; i++){
    cin >> matriculas[i];
  } 

  cout << "A sequência correta é: ";
  for (int i = quantidadeDeMatriculas-1; i >= 0; i--){
    cout << matriculas[i] << " ";
  }
  cout << endl;

  return 0;
}
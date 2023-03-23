#include <iostream>
using namespace std;
#include <string>


int main() {
    
    struct Pessoa {
    string nome;
    string desistente;
    int idade;  
} pessoa;
    
int tamanhoDaFila = 10;

Pessoa fila[tamanhoDaFila];
int posicaoAtual = -1; //diz, teoricamente qual a última posíção que tem uma pessoa na fila.
int posicaoDoDesistente = -1;

char comando;

while (cin >> comando && comando != 'p') {

//ADICIONAR
	if (comando =='+') {    
		cin >> pessoa.nome >> pessoa.idade;
		cout << pessoa.nome << " entrou na fila" << endl;
    
	// se ainda tem espaço na filha 
	if (posicaoAtual+1 >= tamanhoDaFila){
		cout << "A fala está cheia";
	} else {
	fila[++posicaoAtual] = pessoa; // insere a pessoa
    }
  

//RETIRAR
 } else if (comando == '-') {   

//buscar o desistente pelo nome
string desistente;
cin >> desistente;

for ( int i = 0; i < posicaoAtual; i++ ) { // ir de 1 por 1 perguntando o nome do desistente na fila
	if (fila[i].nome == desistente){
		posicaoDoDesistente = i;
		break;
}
}
 
if (posicaoDoDesistente == -1) { 
	cout << "A pessoa n está na fila ou a fila está vazia." << endl;
	continue; // volta para verificar a condição do while.
}
for (int i=posicaoDoDesistente; i < posicaoAtual; i++){
	fila[i] = fila[i+1]; //[i] atual e sobrescreve com a próxima posição de [i]
}
posicaoAtual--; //atualiza a posição do último na fila
cout << desistente << " saiu da fila" << endl;


//ATENDER
} else if (comando == 'a') {  //atender
	if (posicaoAtual == -1) {
	cout << "A fila está vazia" << endl;
	continue; 
} 
	Pessoa proximoDafila = fila[0];
	cout << "Atendendo " << proximoDafila.nome << endl;


	for ( int i =0; i < posicaoAtual; i++) { //todo mundo dá um passo para frente
		fila[i] = fila[i+1]; //[i+1] quer dizer a posição do i +1 posição. Se [i] tava no [0], então agora o [0] passa a ter o valor da [1] posição. .
	}
	posicaoAtual--;

} else {
 cout << "comando inválido!";
}
}
    return 0;

}
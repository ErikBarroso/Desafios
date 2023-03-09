#include <iostream>
using namespace std;

int main()
{
    struct Pessoa { // Nome da Struct
        string nome;
        int idade;
        int altura;
        float salario;
    
    } pessoa1, pessoa2, pessoa4; // variáveis

		pessoa1.nome = "Erik";
    pessoa1.idade = 26;

    pessoa2.idade = 15;
    pessoa2.nome = "Helen";

    cout << "Nome pessoa1: " << pessoa1.nome << endl;
    cout << "Nome pessoa2: " << pessoa2.nome << endl;

		Pessoa pessoa3; // Declarando uma struct nova
		pessoa3.nome = "Carlos";
		cout << "Nome pessoa3: " << pessoa3.nome << endl;

		Pessoa lista[5];
		lista[1].nome = "Alexandre";
		cout << "Pessoa na lista: " << lista[1].nome << endl;
    
    
    system("pause");
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int idades[] = {8, 24, 25, 27, 2, 35};

bool tem = false; // se caso eu achar eu marco ele como true

for (int i=0; i < 6; i++) {
 if ( idades[i] == 28){
		cout << "Tem uma pessoa com 28 anos" << endl;
		tem = true;
		break; // quando eu achar, eu n preciso mas verificar as outras posições.
}
}

if(!tem) { //se eu n tiver uma pessoa com 28 anos, essa variável vai continuar como falsa.
 cout << "Não tem uma pessoa com 28 anos" << endl;
}

    
    system("pause");
    return 0;
}

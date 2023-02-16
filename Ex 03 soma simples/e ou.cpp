#include <iostream>
using namespace std;

int main()
{
    bool condicao = false;
    bool outraCondicao = true;

    if(condicao && outraCondicao){
        cout << "Entra a primeira" << endl;
    } else {
        cout << "Não passou na primeira" << endl;
    }

    if (condicao || outraCondicao) {
        cout << "Entra a segunda" <<endl;
    }
    {
    
    }
    
    
    system("pause");
    return 0;
}

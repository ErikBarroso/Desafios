#include <iostream>
#include <string>
using namespace std;

int main()
{
     
    string nomeDoAluno; 
    
    cin >> nomeDoAluno;

    if(nomeDoAluno.size() <= 4){

        cout << "GRUPO A" << endl;
    }else if(nomeDoAluno.size() >= 5 && nomeDoAluno.size() <= 10){
        cout << "GRUPO B" << endl;
    }else if (nomeDoAluno.size() > 10){
        cout << "GRUPO C" << endl;
    }
    
    
    return 0;
}

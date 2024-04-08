#include <iostream>
#include<vector>
using namespace std;

class Solution
{
public:
  bool isPalindrome(int x){
    vector<int>numeros;

    for( ;x > 0;) {
      numeros.push_back(x % 10);
      x /= 10;
    }
    int direita = numeros.size() -1;
    int esquerda = 0;

    for(;esquerda < direita;){
      if(numeros[direita] != numeros[esquerda]) {
        return false;
      }
      direita--;
      esquerda++;
    }
    return true;
  }
};

int main()
{
  Solution solution;
  bool isPalindromo = solution.isPalindrome(12321);

  return 0;
}

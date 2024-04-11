#include <iostream>
#include <string>
using namespace std;
#include <map>
class Solution{
public:
  int romanToInt(string s){
      map<char,int> algarismoRomanos; 
      algarismoRomanos ['I'] = 1;
      algarismoRomanos ['V'] = 5;
      algarismoRomanos ['X'] = 10;
      algarismoRomanos ['L'] = 50;
      algarismoRomanos ['C'] = 100;
      algarismoRomanos ['D'] = 500;
      algarismoRomanos ['M'] = 1000;

      int soma = 0;
REFAZER COMIT 
VER PORQ A SOMA N SAI CERTA
      for (int i = 0; i < s.length( )-1; i++){
      cout <<"algarimos: " << algarismoRomanos[s[i]] << endl;;

      if ((algarismoRomanos[s[i]] == 1 && algarismoRomanos[s[i + 1]] == 5) ||
         (algarismoRomanos[s[i]] == 1 && algarismoRomanos[s[i + 1]] == 10)) {
        soma += algarismoRomanos[s[i + 1]] - algarismoRomanos[s[i]];
        i++;
      } else if ((algarismoRomanos[s[i]] == 10 && algarismoRomanos[s[i + 1]] == 50 )||
       (algarismoRomanos[s[i]] == 10 && algarismoRomanos[s[i + 1]] == 100))
      {
        soma += algarismoRomanos[s[i + 1]] - algarismoRomanos[s[i]];
        i++;

      }
      else if ((algarismoRomanos[s[i]] == 100 && algarismoRomanos[s[i + 1]] == 'D') ||
       (algarismoRomanos[s[i]] == 100 && algarismoRomanos[s[i + 1]] == 1000))
      {
        soma += algarismoRomanos[s[i + 1]] - algarismoRomanos[s[i]];
        i++;

      }
      soma += algarismoRomanos[s[i]];
      cout << "soma" << soma << endl;
  }
  return soma;
} 
};

int main() {
  Solution solution;
  int romanToInt = solution.romanToInt("IVIXX");
  cout << romanToInt;
  return 0;
}
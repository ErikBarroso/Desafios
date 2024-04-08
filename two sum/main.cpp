#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target){
    // int tamanhoDaArray = sizeof(nums) / sizeof(int);
    int tamanhoDaArray = nums.size();

    for (int i = 0; i <= tamanhoDaArray -1; i++){
      for(int j=0; j < i -1; j++) {
        if(nums[i] +nums[j] == target){
          return {i,j};
        }
      }
    }
    return {};
  }
};

main() {
    Solution solution;
    vector<int> lista = {3, 2, 3};
    vector<int> indices = solution.twoSum(lista, 6);
    return 0;
}
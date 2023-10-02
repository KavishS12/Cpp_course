#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//add function definitions below this line

int GetMax(vector<int> n){
  if (n.size()<=1)
  {return n.at(0);}
  else {
    vector<int> m(n.begin()+1,n.begin()+n.size());
    return max(n.at(0),GetMax(m));
  }
}

//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << GetMax(nums) << endl;
  return 0;
}

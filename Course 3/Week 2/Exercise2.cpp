#include <iostream>
#include <vector>
using namespace std;

//add function definitions below this line

int ListSum(vector<int>& x)
{
  if (x.size()==0)
  {return 0;}
  else {
    vector<int>new_vector(x.begin() + 1, x.begin() + x.size());
    return x.at(0) + ListSum(new_vector);
  }
}

//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << ListSum(nums) << endl;
  return 0;
}

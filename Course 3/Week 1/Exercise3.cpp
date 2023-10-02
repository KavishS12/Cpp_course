#include <iostream>
#include <vector>
using namespace std;

//add code below this line

bool FindTerm(string x,vector<string>& y)
{
  for (int i=0;i<y.size();i++)
  {
    if (x== y.at(i))
    {
      return 1;
      break;
    }
  }
  return 0;
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<string> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(argv[i]);
  }
  cout << boolalpha << FindTerm(x, y) << endl;
}

#include <iostream>
#include <vector>
using namespace std;

//add code below this line

bool IsPalindrome(string x)
{
  string y;
  for (int i=(x.size()-1);i>=0;i--)
  {
    y = y + x.at(i);
  }
  if (x==y){return 1;}
  else return 0;
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}

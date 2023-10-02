#include <iostream>
using namespace std;

//add function definitions below this line

string ReverseString(string x)
{
  if (x.length()==0)
  return x;
  else return x.substr(x.length() - 1) + ReverseString(x.substr(0, x.length() - 1));
}

//add function definitions above this line

int main(int argc, char** argv) {
  cout << ReverseString(argv[1]) << endl;
  return 0;
}

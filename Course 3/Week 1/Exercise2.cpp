#include <iostream>
#include <vector>
using namespace std;

//add code below this line

int GetOddsEvens(string x,vector <int>& y)
{
  if (x=="true")
  {
    for (int i=0;i<y.size();i++)
    {
      if (y.at(i) %2 ==0) { cout << y.at(i) << endl;}
    }
  }
  else if (x=="false")
  {
    for (int i=0;i<y.size();i++)
    {
      if (y.at(i) %2==1) { cout << y.at(i) << endl;}
    }
  }
  
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<int> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(stoi(argv[i]));
  }
  GetOddsEvens(x, y);
}

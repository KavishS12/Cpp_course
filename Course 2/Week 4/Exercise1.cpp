#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line

ifstream file;
vector <string> t;
string s1;
file.open(path);
while (getline(file,s1))
t.push_back(s1);

int ch;
cout << t.size() << " line(s)" << endl;
for (int i=0;i<t.size();i++){
  for (int j=0;j<(t.at(i)).length();j++){
    ch ++;
  }
}
cout << ch << " character(s)" << endl;
  
  //add code above this line
  
  return 0;
  
}

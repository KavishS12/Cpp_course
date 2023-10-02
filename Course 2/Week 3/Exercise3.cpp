#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string original = (argv[1]);
  string modified;
  char ch;
  
  //add code below this line

cout << original<< endl;
for (char ch : original)
{
  if (isupper(ch))
  ch = 'u';
  else if (islower(ch))
  ch = 'l';
  else ch = '-';
  cout << ch ;
}

  //add code above this line
  
  return 0;
  
}

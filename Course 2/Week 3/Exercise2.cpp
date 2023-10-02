#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line

for (int i=1;i<=my_string.length();i++)
{
  for (int i=1;i<=my_string.length()-1;i++)
  {
    cout << my_string;
  }
  cout << my_string << endl;
}

  //add code above this line
  
  return 0;
  
}

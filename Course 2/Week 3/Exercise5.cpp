#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line

char temp;
for (int i=0;i<my_string.length()-1;i+=2)
{
  cout << my_string.at(i+1) << my_string.at(i);
}

  //add code above this line
  
  return 0;
  
}

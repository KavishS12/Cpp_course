#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line

char a = my_string.at(0);
char b = my_string.at(my_string.length()-1);

cout << a << " is the first character and " << b << " is the last character";

  //add code above this line
  
  return 0;
  
}

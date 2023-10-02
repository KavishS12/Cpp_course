#include <iostream>
#include <vector>
using namespace std;

//DO NOT EDIT/////////////////////////////////////
class Temperature {                             //
  public:                                       //
    virtual double Celsius(double temp) = 0;    //
    virtual double Fahrenheit(double temp) = 0; //
};                                              //
//////////////////////////////////////////////////

//add class definitions below this line

class Conversion : public Temperature{
  public:
    double ConvertTo(char s,double t){
      if (s=='C' || s=='c'){
        return Celsius(t);
      }
      if (s=='F'||s=='f'){
        return Fahrenheit(t);
      }
      else return -0.0001;
    }

  private:
    double Celsius(double t){
      return (t-32)/1.8;
    }
    double Fahrenheit(double t){
      return (t*1.8 +32);
    }
};

//add class definitions above this line


int main() {
  
  //DO NOT EDIT code below this line
   
  Conversion c;
  cout << c.ConvertTo('c', 212.0) << endl;
  cout << c.ConvertTo('C', 78.0) << endl;
  cout << c.ConvertTo('h', 23.0) << endl;
  cout << c.ConvertTo('F', 0.0) << endl;
  cout << c.ConvertTo('f', 29.0) <<endl;
  cout << c.ConvertTo('3', 112.0) << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}

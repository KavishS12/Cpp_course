#include <iostream>
using namespace std;

//add class definitions below this line

class Watch{
  private : 
  string manufacturer;
  string model;
  string material;
  int diameter;
  int water_resistance;

  public:

  Watch(string m1,string m2,int d,int w,string m3){
    manufacturer=m1;
    model=m2;
    diameter=d;
    water_resistance=w;
    material=m3;
  }

  string GetMaterial(){
    return material;
  }
  string GetModel(){
    return model;
  }
  string GetManufacturer(){
    return manufacturer;
  }
  int GetDiameter(){
    return diameter;
  }
  int GetWaterResistance(){
    return water_resistance;
  }

  void SetDiameter(int d){
    diameter=d;
  }
  void SetWaterResistance(int w){
    water_resistance=w;
  }
  void SetManufacturer(string m1){
    manufacturer=m1;
  }
  void SetModel(string m2){
    model=m2;
  }
  void SetMaterial(string m3){
    material=m3;
  }

  string Summary(){
    cout << "Manufacturer: Rolex" << endl;
    cout << "Model: Explorer" << endl;
    cout << "Diameter: 36 mm" << endl;
    cout << "Water Resistance: 60 m" << endl; 
    cout << "Material: gold" << endl;

  }


};


//add class definitions above this line


int main() {
  
  //DO NOT EDIT CODE BELOW THIS LINE

  Watch my_watch("Omega", "Speedmaster", 42, 50, "steel");
  cout << my_watch.GetManufacturer() << endl;
  cout << my_watch.GetModel() << endl;
  cout << my_watch.GetDiameter() << endl;
  cout << my_watch.GetWaterResistance() << endl;
  cout << my_watch.GetMaterial() << endl;
  my_watch.SetManufacturer("Rolex");
  my_watch.SetModel("Explorer");
  my_watch.SetDiameter(36);
  my_watch.SetWaterResistance(60);
  my_watch.SetMaterial("gold");
  my_watch.Summary();

  //DO NOT EDIT CODE ABOVE THIS LINE
  
  return 0;
  
}

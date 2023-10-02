#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int a = atoi((argv[1]));
  int b = atoi((argv[2]));
  int c = atoi((argv[3]));
  int d = atoi((argv[4]));
  int nums[3][3];
  
  //add code below this line

nums[0][0] = a;
nums[0][1] = b;
nums[1][0] = c;
nums[1][1] = d;
nums[0][2] = nums[0][0] + nums[0][1];
nums[1][2] = nums[1][0] + nums[1][1];
nums[2][0] = nums[1][0] + nums[0][0];
nums[2][1] =nums[0][1] + nums[1][1];
nums[2][2] = nums[2][0] + nums[2][1] + nums[0][2] + nums[1][2];

  //add code above this line
  
  int row = sizeof(nums) / sizeof(nums[0]);
  int col = sizeof(nums[0]) / sizeof(int);
  
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      if (j == 2) {
        cout << nums[i][j] << endl;
      }
      else {
        cout << nums[i][j] << " ";
      }
    }
  }
  
  return 0;
  
}

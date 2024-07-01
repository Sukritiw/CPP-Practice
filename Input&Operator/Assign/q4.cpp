#include <iostream>
#define PI 3.14159
using namespace std;

int main() {
  float r, h, vol;
  cout << "Enter the radius of the cylinder: ";
  cin >> r;
  cout << "Enter the height of the cylinder: ";
  cin >> h;
  vol = PI * r * r* h;
  cout << "The volume of the cylinder is: " << vol << endl;
  return 0;
}

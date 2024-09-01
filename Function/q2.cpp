#include <iostream>
using namespace std;
#include <cmath> // For M_PI constant

double calArea(double r) {
    cout<< "Area of the circle :"<<" "<< M_PI * r * r;
}

int main() {
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    double area = calArea(r);
    return 0;
}

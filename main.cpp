#include <iostream>
#include <cmath>

using namespace std;

double volume_of_sphere(double radius) {
    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
    return volume;
}

int main() {
    double radius;
    cout << "Give me a radius, and I will tell you the volume of the sphere:" << endl;
    cin >> radius;

    double volume = volume_of_sphere(radius);

    cout << "The volume of the sphere is: " << volume << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    float l, w, s, r;

    // Rectangle
    cout << "Enter length and width: ";
    cin >> l >> w;
    cout << "Rectangle: " << l << " * " << w << " = " << l * w << endl;

    // Square
    cout << "Enter side: ";
    cin >> s;
    cout << "Square: " << s << " * " << s << " = " << s * s << endl;

    // Circle
    cout << "Enter radius: ";
    cin >> r;
    cout << "Circle: 3.14 * " << r << " * " << r << " = " << 3.14 * r * r << endl;

    return 0;
}
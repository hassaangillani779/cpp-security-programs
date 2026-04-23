#include <iostream>
using namespace std;

float rectangleArea(float length, float width) {
    return length * width;
}

int main() {
    float length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    float area = rectangleArea(length, width);

    cout << "Area of Rectangle = " << area << endl;

    return 0;
}

// Problem # 18: Write a C++ program to calculate the area of Circle, Square, and Rectangle using
// switch statement.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double area;
    cout << "Choose a shape to calculate the area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    switch (choice) {
        case 1: {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            area = M_PI * radius * radius;
            cout << "The area of the circle is: " << area << endl;
            break;
        }
        case 2: {
            double side;
            cout << "Enter the side length of the square: ";
            cin >> side;
            area = side * side;
            cout << "The area of the square is: " << area << endl;
            break;
        }
        case 3: {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            area = length * width;
            cout << "The area of the rectangle is: " << area << endl;
            break;
        }
        default:
            cout << "Invalid choice! Please select 1, 2, or 3." << endl;
    }
    return 0;
}

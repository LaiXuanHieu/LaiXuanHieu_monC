// chương trình menu tính diện tích từng hình
#include <iostream>
using namespace std;

const double PI = 3.14159;

int main()
{
    int choice;
    while (true)
    {
        cout << "Geometry Calculator" << endl;
        cout << "1. Calculate the Area of a Circle" << endl;
        cout << "2. Calculate the Area of a Rectangle" << endl;
        cout << "3. Calculate the Area of a Triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        if (choice == 1)
        {
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            if (radius < 0)
            {
                cout << "Radius cannot be negative. Please enter a positive value." << endl;
                continue;
            }
            double area = PI * radius * radius;
            cout << "The area of the circle is: " << area << endl;
        }
        else if (choice == 2)
        {
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            if (length < 0 || width < 0)
            {
                cout << "Length and width must be positive values. Please enter positive values." << endl;
                continue;
            }
            double area = length * width;
            cout << "The area of the rectangle is: " << area << endl;
        }
        else if (choice == 3)
        {
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            if (base < 0 || height < 0)
            {
                cout << "Base and height must be positive values. Please enter positive values." << endl;
                continue;
            }
            double area = 0.5 * base * height;
            cout << "The area of the triangle is: " << area << endl;
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    }

    return 0;
}
// This program creates three instances of the Rectangle class.
#include <iostream>
#include <memory>
using namespace std;
class Rectangle
{
private:
    double width, length;

public:
    void setLength(double);
    void setWidth(double);
    double getLength() const;
    double getWidth() const;
    double getArea() const;
};
void Rectangle ::setLength(double tam)
{
    length = tam;
}
void Rectangle ::setWidth(double le)
{
    width = le;
}
double Rectangle ::getLength() const
{
    return length;
}
double Rectangle ::getWidth() const
{
    return width;
}
double Rectangle ::getArea() const
{
    return width * length;
}
int main()
{
    double number;    // To hold a number
    double totalArea; // The total area
    // Dynamically allocate the objects.
    unique_ptr<Rectangle> kitchen(new Rectangle);
    unique_ptr<Rectangle> bedroom(new Rectangle);
    unique_ptr<Rectangle> den(new Rectangle);
    // Get the kitchen dimensions.
    cout << "What is the kitchen's length? ";
    cin >> number;              // Get the length
    kitchen->setLength(number); // Store in kitchen object
    cout << "What is the kitchen's width? ";
    cin >> number;             // Get the width
    kitchen->setWidth(number); // Store in kitchen object
    // Get the bedroom dimensions.
    cout << "What is the bedroom's length? ";
    cin >> number;              // Get the length
    bedroom->setLength(number); // Store in bedroom object
    cout << "What is the bedroom's width? ";
    cin >> number;             // Get the width
    bedroom->setWidth(number); // Store in bedroom object
    // Get the den dimensions.
    cout << "What is the den's length? ";
    cin >> number;          // Get the length
    den->setLength(number); // Store in den object
    cout << "What is the den's width? ";
    cin >> number;         // Get the width
    den->setWidth(number); // Store in den object
    // Calculate the total area of the three rooms.
    totalArea = kitchen->getArea() + bedroom->getArea() +
                den->getArea();
    // Display the total area of the three rooms.
    cout << "The total area of the three rooms is "
         << totalArea << endl;
    return 0;
}
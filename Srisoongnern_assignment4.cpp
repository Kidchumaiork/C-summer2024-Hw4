#include <iostream> // Needed for cout
#include <cmath>
using namespace std;

class Cylinder
{
private:
    double radius;
    double length;

public:
    void setRadius(double);
    void setLength(double);
    double getVolume() const
    {
        return 3.1416 * radius * radius * length;
    }
    double getSurfaceArea() const
    {
        return 2 * 3.1416 * radius * length;
    }
};

// setRadius sets the value of the member variable radius.
void Cylinder::setRadius(double r)
{
    radius = r;
}

// setHeight sets the value of the member variable height.
void Cylinder::setLength(double l)
{
    length = l;
}

int main()
{
    Cylinder c; // Define an instance of the Cylinder class
    double rad; // Local variable for radius
    double len; // Local variable for length

    cout << "Enter the radius of circle = ";
    cin >> rad;
    cout << "Enter the len of cylinder = ";
    cin >> len;

    // Store the radius and length of the cylinder in the box object.
    c.setRadius(rad);
    c.setLength(len);

    // Display the cylinder data.
    cout << "Surface area of a cylinder = " << c.getSurfaceArea() << endl;
    cout << "Volume of a cylinder = " << c.getVolume() << endl;

    return 0;
}

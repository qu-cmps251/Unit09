#include <iostream>

using namespace std;

class Rectangle
{
	private:
		double width;
		double height;

	public:
		Rectangle(double w, double h);
		double getArea(void);
};

Rectangle::Rectangle(double w, double h) {
	width = w;
	height = h;
}

double Rectangle::getArea(void)
{
	return width*height;
}


int main(void) {
	Rectangle r(5,4);

	cout << "Area is: " << r.getArea() << "\n";
}

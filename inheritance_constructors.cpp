#include <iostream>

using namespace std;

class Rectangle
{
	protected:
		double width;
		double height;

	public:
		Rectangle(double w, double h);
		double getArea(void);
};

class Square: public Rectangle
{
	public:
		Square(double s);
};

Square::Square(double s): Rectangle(s,s) {
}

Rectangle::Rectangle(double w, double h) {
	width = w;
	height = h;
}

double Rectangle::getArea(void)
{
	return width*height;
}


int main(void) {
	Square s(6);

	cout << "Area is: " << s.getArea() << "\n";
}

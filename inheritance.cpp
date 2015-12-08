#include <iostream>

using namespace std;

class Rectangle
{
	private:
		double width;
		double height;

	public:
		void setWidth(double w);
		void setHeight(double h);
		double getArea(void);
};

class Square: public Rectangle
{
	public:
		void setSide(double s);
};

void Square::setSide(double s)
{
	setWidth(s);
	setHeight(s);
}

void Rectangle::setWidth(double w) 
{
	width = w;
}

void Rectangle::setHeight(double h) 
{
	height = h;
}

double Rectangle::getArea(void)
{
	return width*height;
}


int main(void) {
	Square s;

	s.setSide(6);

	cout << "Area is: " << s.getArea() << "\n";
}

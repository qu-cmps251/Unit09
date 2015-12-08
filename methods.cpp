#include <iostream>

using namespace std;

class Rectangle
{
	private:
		double width;
		double height;

	public:
		void setWidth(double w) {
			width = w;
		}

		void setHeight(double h) {
			height = h;
  		}

		double getArea(void)
		{
			return width*height;
		}
};

int main(void) {
	Rectangle r;

	r.setWidth(5);
	r.setHeight(4);

	cout << "Area is: " << r.getArea() << "\n";
}

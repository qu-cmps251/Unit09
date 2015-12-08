#include <iostream>

using namespace std;

class Rectangle
{
	private:
		int privthing;

	public:
		double width;
		double height;
};

int main(void) {
	Rectangle r;

	r.width = 5;
	r.height = 4;

	cout << "Area is: " << r.width*r.height << "\n";
}

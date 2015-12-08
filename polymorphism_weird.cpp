#include <iostream>

using namespace std;

class Item1
{
	public:
		void sayHi(void)
		{
			cout << "Hi from Item1\n";
		}
};

class Item2: public Item1
{
	public:
		void sayHi(void)
		{
			cout << "Hi from Item2\n";
		}
};

class Item3: public Item1
{
	public:
		void sayHi(void)
		{
			cout << "Hi from Item3\n";
		}
};

int main(void) {
	Item2 i2;
	Item3 i3;

	Item1* t1 = &i2;
	Item1* t2 = &i3;

	t1->sayHi();
	t2->sayHi();
}

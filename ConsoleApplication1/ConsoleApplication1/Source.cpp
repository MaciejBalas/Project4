#include <iostream>

using namespace std;

class CComplexNumber {

	double rm, im;
public:
	void Set(double a, double b)
	{
		rm = a;
		im = b;
	}

	void Display()
	{
		cout << rm << " + " << im << "i" << endl;
	}

};

int main()
{
	CComplexNumber a;
	a.Set(3, 4);
	a.Display();

	getchar();
	return 0;
}
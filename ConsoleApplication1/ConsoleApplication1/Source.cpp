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

	void Read(double &a, double &b) {
		a = rm;
		b = im;
	}

};

int main()
{
	CComplexNumber a;
	a.Set(3, 4);
	a.Display();

	double rm, im;

	a.Read(rm, im);
	a.Set(rm + 2, im + 2);
	a.Display();


	getchar();
	return 0;
}
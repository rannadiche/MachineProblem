#include <iostream>
#include <cmath>

using namespace std;

void factor(int b, int c, int& u1, int& v1, bool& factorable)
{
	double discriminant;
	int temp;
	
	factorable = true;
	
	discriminant = b * b - 4 * c;
	
	if(discriminant < 0)
		factorable = false;
	else
	{
		temp = static_cast<int> (sqrt(discriminant));
		
		if (temp * temp != discriminant)
			factorable = false;
		else
		{
			if(((-b + temp) % 2 != 0 ) || ((-b - temp) % 2 != 0))
				factorable = false;
			else
			{
				u1 = (-b + temp) / 2;
				v1 = (-b - temp) / 2;
			}
		}
	}
}

int main()
{
	int b, c, u, v;
	bool isFactorable;
	
	cout << "x^2 + bx + c" << endl;
	
	cout << endl << "Enter the coefficient of x: ";
	cin >> b;
	
	cout << endl << "Enter the constant term: ";
	cin >> c;
	cout << endl;
	
	factor(b, c, u, v, isFactorable);
	
	if(isFactorable)
	{
		cout << "x^2";
		
		if(b > 0)
			cout << " + " << b << "x";
		else if(b < 0)
			cout << " - " << abs(b) << "x";
		
		if(c > 0)
			cout << " + " << c;
		else if (c < 0)
			cout << " - " << abs(c);
		
		cout << " = (x";
		if(u > 0)
			cout << " - " << u << ") (x";
		else if(u < 0)
			cout << " + " << abs(u) << ") (x";
			
		if(v > 0)
			cout << " - " << v << ")" << endl;
		else if(v < 0)
			cout << " + " << abs(v) << ")" << endl;	
	}
	
	else
		cout << "The polynomial is not factorable.";
		
	return 0;
}

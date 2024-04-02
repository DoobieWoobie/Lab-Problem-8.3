#include <iostream>
#include <string>
using namespace std;
//Roman Character translate function
int romanCharValue(char r)
{
	if (r == 'I')
		return 1;
	if (r == 'V')
		return 5;
	if (r == 'X')
		return 10;
	if (r == 'L')
		return 50;
	if (r == 'C')
		return 100;
	if (r == 'D')
		return 500;
	if (r == 'M')
		return 1000;
	return -1;
}
int main()
{
	bool input = true;
	while (input)
	{

		char r;
		cout << "Input Roman Number or Q to quit: ";
		cin >> r;
		int result = romanCharValue(r);
		if (r == 'Q')
		{
			input = false;
		}
		else
		{
			cout << r << " = " << result << endl;
		}
	}return 0;
}
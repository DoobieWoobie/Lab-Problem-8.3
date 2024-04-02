#include <iostream>
#include <string>
using namespace std;
//Roman Character Value function
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
//Roman to Integer Function
int convertRomanToInt(string s)
{
	int total = 0;
	int string = s.size();
	for (int i = 0; i < string; i++)
	{
		int s1 = romanCharValue(s[i]);
		int s2 = romanCharValue(s[i + 1]);
		if (i + 1 < s.length())
		{
			if (s1 >= s2)
			{
				total = total + s1;
			}
			else
			{
				total = total + s2 - s1;
				i++;
			}
		}
		else
		{
			total = total + s1;
		}
	} return total;
}
//Main Function
int main()
{
	bool input = true;
	while (input)
	{
		string s;
		cout << "Input Roman Number or Q to quit: ";
		cin >> s;
		int result = convertRomanToInt(s);
		if (s == "Q")
		{
			input = false;
		}
		else
		{
			cout << s << " = " << result << endl;
		}
	}return 0;
}
#include <iostream>
#include <cmath>
using namespace std;


bool isPal(int num);
int getPow(int num);
void getDig(int num, int array[], int len);
bool findInts(int num);

int main()
{
	int highest = 999*999;
	bool found = false;
	
	do {
		if ( isPal(highest) && findInts(highest) )
			{
			cout << highest << endl;
			found = true;
			}
		else
			{
			highest--;
			}

	} while (!found);	

	return 0;
}

bool findInts(int num)
{
	int num1 = 999;
	bool found = false;

	while (!found && num1 > 99)
		{
		if (num % num1 == 0 && num/num1 >= 100 && num/num1 < 1000)
			{
			cout << num1 << " * " << num/num1 << endl;
			found = true;
			}
		else
			{
			num1--;
			}
		}
	return found;
}

bool isPal(int num)
{
	int length = getPow(num);
	int digits[length];
	getDig(num, digits, length);
	bool palindrome = true;

	for (int i = 0; i < length-1 - i; i++)
		{
		if (digits[i] != digits[length-1 - i])
			{
			palindrome = false;
			}
		}

	return palindrome;
}

void getDig(int num, int array[], int len)
{
	for (int i = len - 1; i >= 0; i--)
		{
		array[i] = num / pow(10, i);
		num -= pow(10, i) * array[i];
		}
}

int getPow(int num)
{
	int lower = 0;
	int upper = 1;
	bool found = false;

	do {
		if ( pow(10, lower) <= num && pow(10, upper) > num)
			{
			found = true;
			}
		else
			{
			lower++;
			upper++;
			}
		} while (!found);

	return upper;
}

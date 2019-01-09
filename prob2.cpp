#include <iostream>
using namespace std;

int main()
{
	int sum = 2;
	int val1 = 1;
	int val2 = 2;
	int val3 = 3;

	while (val3 < 4000000)
		{
		val1 = val2;
		val2 = val3;
		val3 = val1 + val2;
		if (val3 % 2 == 0)
			{
			sum += val3;
			}
		}
	
	cout << sum << endl;

	return 0;
}

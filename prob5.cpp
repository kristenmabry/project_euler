#include <iostream>
using namespace std;

bool divisible(int small, int nums[]);

int main()
{
	int array[20];
	for (int i = 0; i < 20; i++)
		{
		array[i] = i+1;
		}
	bool divis = false;
	int smallest = 20*19*17*13*11*7*3;
	while (!divis)
		{
		smallest++;
		divis = divisible(smallest, array);
		}
	cout << smallest << endl;
	
	return 0;
}

bool divisible(int small, int nums[])
{
	int canDiv = true;
	int i = 0;

	while (i < 20 && canDiv)
		{
		if (small % nums[i] != 0)
			{
			canDiv = false;
			}
		i++;
		}

	return canDiv;
}

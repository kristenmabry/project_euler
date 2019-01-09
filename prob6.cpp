#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int sumsq = 0;
	int sqsum = 0;
	for (int i = 1; i <= 100; i++)
		{
		sumsq += i * i;
		sqsum += i;
		}
	sqsum *= sqsum;

	cout << abs(sqsum - sumsq) << endl;
	return 0;
}


#include <iostream>
using namespace std;

int main()
{
	int array[100];
	int length = 0;
	long currNum = 600851475143;
	int currInt = 2;
	while (currInt < currNum)
		{
		if (currNum % currInt == 0)
			{
			array[length] = currInt;
			length++;
			currNum /= currInt;
			currInt = 2;
			}
		else
			{
			currInt++;
			}
		}
	
	array[length] = currNum;
	sort(array, array + length + 1);
	cout << array[length] << endl;
	return 0;
}

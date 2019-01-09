#include <iostream>
using namespace std;

void getPrimes();
int exists(int array[], int length, int search);
void showArray(int array[], int length);
bool primesAlready(int array[], int &length, int num);

int main()
{
	getPrimes();
	return 0;
}

void getPrimes()
{
	int primes[20];
	int length = 0;
	
	for (int i = 2; i <=21; i++)
		{
		bool prime = true;
		for (int x = 2; x < i; x++)
			{
			if (i % x == 0 && exists(primes, length, i/x) == 0 
				&& !primesAlready(primes, length, i/x) )
				{
				primes[length] = i/x;
				length++;
				prime = false;
				}

			else if (i % x == 0)
				{
				prime = false;
				}
			}
		if (prime)
			{
			primes[length] = i;
			length++;
			}
		}
	showArray(primes, length);
}


int exists(int array[], int length, int search)
{

	int count = 0;
	for (int i = 0; i < length; i++)
		{
		if (array[i] == search)
			{
			count ++;
			}
		}
	return count;
}


void showArray(int array[], int length)
{
	int prod = 1;
	for(int i = 0; i < length; i++)
		{
		cout << array[i] << " ";
		prod *= array[i];
		}
	cout << endl << prod << endl;
}


bool primesAlready(int array[], int &length, int num)
{
	for (int i = 0; i < length; i++)
		{
		if ( num % array[i] == 0 && exists(array, length, num/array[i]) != -1
		&& array[i] != num/array[i] )
			{
			return true;
			}
		else if (array[i] == num/array[i]
			&& exists(array, length, num/array[i]) == 1)
			{
			array[length] = array[i];
			length++;
			return true;
			}
		}
	return false;
}

#include <iostream>
using namespace std;

bool isPrime(int num, int primeList[], int len);

int main()
{
	int length = 0;
	int primes[10001];
	int count = 2;

	while (length < 10001)
		{
		if ( isPrime(count, primes, length) )
			{
			primes[length] = count;
			length++;
			}
		count++;
		}

	cout << primes[10000] << endl;
	return 0;
}

bool isPrime(int num, int primeList[], int len)
{
	for (int i = 0; i < len; i++)
		{
		if ( num % primeList[i] == 0)
			{
			return false;
			}
		}
	return true;
}

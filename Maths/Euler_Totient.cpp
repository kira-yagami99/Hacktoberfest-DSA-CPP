/*Euler's totient function, also known as phi-function ϕ(n), counts the number of integers between 1 and n inclusive, which are coprime to n.
 TIME COMPLEXITY - O(sqrt(n)) */
//Akash Jain

#include <bits/stdc++.h>
using namespace std;

long long euler_totient(long long n)
{
	long long result = n;
	for (long long i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	}
	if (n > 1)
		result -= result / n;

	return result;
}

//Driver Function
int main()
{

	long long n = 45;
	long long z = euler_totient(n);

	cout << z << endl;

	return 0;
}
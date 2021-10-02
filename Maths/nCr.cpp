//C++ program to calculate nCr (Combinations)
//AKASH JAIN
#include <bits/stdc++.h>
using namespace std;

long long nCr(long long n, long long r)
{
	if (r > n - r)
		r = n - r;  //nCr = nC(n-r)
	long long ans = 1;
	for (long long i = 1; i <= r; i++)
	{
		ans *= n - r + i;
		ans /= i;
	}
	return ans;
}

// Driver code
int main()
{
	long long n = 5, r = 3;
	long long ans = nCr(n, r);
	cout << ans << endl;

	return 0;
}

/*This code will start multiplication of the numerator from the smaller end,
and as the product of any k consecutive integers is divisible by k!,
there will be no divisibility problem. But the possibility of overflow is still there,
another useful trick may be dividing n - r + i and i by their GCD before doing the multiplication
and division (and still overflow may occur).*/
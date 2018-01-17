#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	long long x, k;
	long long bitNum = 1;
	long long ans = 0;
	cin >> x >> k;

	while (k)
	{
		if ((x&bitNum) == 0)
		{
			ans += (bitNum*(k & 1));
			k >>= 1;
		}

		bitNum <<= 1;

	}
	
	cout << ans << endl;

	return 0;
}
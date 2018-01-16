#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	int n, s, l;
	int ans = 0;
	int perdisk = 0;

	cin >> n >> s >> l;
	perdisk = l / (s + (s == l ? 0 : 1));
	if (perdisk % 13 == 0)
	{
		perdisk--;
	}
	if (n > perdisk)
		cout << n / perdisk + (n%perdisk ? 1 : 0) << endl;
	else
		cout << 1 + (n % 13 ? 0 : 1) << endl;
	return 0;

}
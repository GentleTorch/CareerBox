#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string str, tmp;
	cin >> str;
	int n, p, l;
	cin >> n;
	while (n--)
	{
		cin >> p >> l;
		tmp = str.substr(p, l);
		reverse(tmp.begin(), tmp.end());
		str.insert(p + l, tmp);
	}

	cout << str << endl;
	return 0;


}
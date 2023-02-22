#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; i++)
using namespace std;
int n, a[1000001];
bool kt[1000001];
void sangnto()
{
	kt[1]=false;
	FOR(i,2,100000)
		kt[i] = true;
	FOR(i,2,1000000)
		if (kt[i] == true)
			for (int j = 2 * i; j <= 1000000; j += i)
				kt[j] = false;
}
void nhap()
{
	cin >> n;
	FOR(i, 1, n)
	cin >> a[i];
}
bool nto1(int m)
{
	bool kt1 = true;
	if (kt[m] == false)
		return false;
	while (m > 0)
	{
		if (kt[m] == false)
			return false;
		m = m / 10;
	}
	return true;
}
int main()
{
	cin>>n;
	sangnto();
	FOR(i, 1, n)
	if (kt[i] == true)
	{
		cout << i << " ";
	}
}
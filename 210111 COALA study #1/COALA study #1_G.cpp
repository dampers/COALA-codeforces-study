#include <bits/stdc++.h>
using namespace std;
#define swap(a,b) (a)^=(b)^=(a)^=(b)
#define endl '\n'
typedef long long lld;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<int> v(n, 0);
	int ans = 0;
	int ocnt = 0, th = 0, tcnt = 0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		if(v[i]==4) ans++;
		else if(v[i]==1) ocnt++;
		else if(v[i]==2) tcnt++;
		else th++;
	}
	while(ocnt && th)
	{
		ocnt--;
		th--;
		ans++;
	}
	while(ocnt>=2 && tcnt)
	{
		ans++;
		ocnt -= 2;
		tcnt--;
	}
	while(ocnt && tcnt)
	{
		ans++;
		ocnt--;
		tcnt--;
	}
	ans += tcnt/2+(tcnt%2?1:0);
	ans += ocnt/4+(ocnt%4?1:0);
	ans += th;
	cout<<ans;
	return 0;
}
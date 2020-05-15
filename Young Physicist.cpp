#include <bits/stdc++.h>
#define swap(a,b) (a)^=(b)^=(a)^=(b)
#define endl '\n'
using namespace std;
typedef long long lld;


int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int xsum = 0, ysum = 0, zsum = 0;
	while(n--)
	{
		int x, y, z;
		cin>>x>>y>>z;
		xsum += x;
		ysum += y;
		zsum += z;
	}
	if(xsum==0 && ysum==0 && zsum==0) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
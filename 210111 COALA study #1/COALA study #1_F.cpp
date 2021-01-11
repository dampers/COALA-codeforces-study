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
	int tc;
	cin>>tc;
	while(tc--)
	{
		lld n, k;
		cin>>n>>k;
		if(k==1 && n%2) cout<<"YES"<<endl;
		else if(n%2==k%2)
		{
			if(k*k<=n) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
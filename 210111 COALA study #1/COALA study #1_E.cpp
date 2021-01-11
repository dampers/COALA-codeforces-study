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
		lld n, s, k;
		cin>>n>>s>>k;
		map<lld, int> mp;
		vector<lld> v(k, 0LL);
		for(int i=0;i<k;i++)
		{
			cin>>v[i];
			mp[v[i]] = 1;
		}
		for(lld i=0;i<=n;i++)
		{
			if(s+i<=n && mp[s+i]==0)
			{
				cout<<i<<endl;
				break;
			}
			if(s-i>=1 && mp[s-i]==0)
			{
				cout<<i<<endl;
				break;
			}
		}
 
 
	}
 
	return 0;
}
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
	string a, b;
	cin>>a>>b;
	
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		int tmpa = a[i]-b[i], tmpb = b[i]-a[i];
		if(tmpa<0) tmpa+=10;
		if(tmpb<0) tmpb+=10;
		if(tmpa>tmpb) ans += tmpb;
		else ans += tmpa;
	}
	cout<<ans;

	return 0;
}
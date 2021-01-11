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
	int mxind = 0, mnind = 0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		if(v[i]==n) mxind = i;
		if(v[i]==1) mnind = i;
	}
	cout<<max(max(n-mxind-1, mnind), max(n-mnind-1, mxind));


	return 0;
}
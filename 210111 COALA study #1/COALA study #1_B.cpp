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
	int x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	cout<<max(abs(x1-x2), abs(y1-y2));
	return 0;
}
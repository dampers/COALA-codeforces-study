#include <bits/stdc++.h>
#define swap(a,b) (a)^=(b)^=(a)^=(b)
#define endl '\n'
using namespace std;
typedef long long lld;

int matrix[6][6];

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	int y, x;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			cin>>matrix[i][j];
			if(matrix[i][j]==1)
			{
				y = i;
				x = j;
			}
		}
	}
	cout<<abs(3-y)+abs(3-x)<<endl;
	return 0;
}
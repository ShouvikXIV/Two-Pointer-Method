#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;     //test cases
	cin>>t;
	for(int i = 0;i<t;i++)
	{
		int n,target;
		cin>>target;
		cin>>n;
		std::vector<pair<int,int>> v;
		for(int j = 1;j<=n;j++)
		{
			int z;
			cin>>z;
			v.push_back(make_pair(z,j));
		}
		sort(v.begin(),v.end());
		int f1 = 0;
		int f2 = n-1;
		bool x = true;
		while(x)
		{
			if(v[f1].first+v[f2].first>target)
			{
				f2 = f2-1;
			}
			else if(v[f1].first+v[f2].first<target)
			{
				f1 = f1+1;
			}
			else if(v[f1].first+v[f2].first==target)
			{
				cout<<v[f1].second<<' '<<v[f2].second;
				x = false;
			}
		}
	}
	return 0;
}   
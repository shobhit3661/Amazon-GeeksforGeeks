/*
	0-1 knapsack problem with given weight and assiegned values find that maximum profit out of it
	
	ex : value {60,100,120};
		 weight {10,20,30};
		 W = 50;
		 
		Solution : 220;
*/


#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void solve()
{
	int n;
	cin>>n;
	
	int value[n];
	int weight[n];
	
	for(int i=0;i<n;i++)cin>>value[i];
	for(int i=0;i<n;i++)cin>>weight[i];
	
	
}

int main()
{
	fast;
	ll t=1;
	cin>>t;
	while(t--)
		solve();
	return 0;
}




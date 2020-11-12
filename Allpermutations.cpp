#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

void get_all(char s[],int len,int loc)
{
	if(loc==len)
	{
		cout<<s<<"\n";
	}
	else
	{
		for(int i=loc;i<=len;i++)
		{
			swap(s[loc],s[i]);
			get_all(s,len,loc+1);
			swap(s[loc],s[i]);
		}
	}
}

void solve()
{
	char s[10];
	cin>>s;
	int len = strlen(s);
	
	get_all(s,len-1,0);
	
}	

int main()
{
	fast;
	ll t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;
}




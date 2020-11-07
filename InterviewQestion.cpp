/*Adarsh interview Question in Amazon

Question 1:- You are given a string of numbers , You have to return a partitioned String Array in which substring (i-1)th +(i-2)th = ith substring. 
If not possible return empty string array.
For example:
Input:                  Output:
"111122335"   ------>   {"1","11","12","23","35"}  
Input:                  Output:
"112233"      ------->  {"11","22","33"}
Input:                  Output:
"11314"       ------->  {"11","3","14"} or {"1","13","14"}
Input:                  Output:
"13234113"     -------->{}


*/

#include<bits/stdc++.h>
#define fast  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
typedef long long int ll;

using namespace std;

vector<string> getout(string a)
{
	vector<string> ans;
	
	
	return ans;
}

void solve()
{
	string a;
	cin>>a;
	
	vector<string> ans;
	ans = getout(a);
	
	for(auto i : ans)
		cout<<i;
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




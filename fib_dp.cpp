#include<bits/stdc++.h>
using namespace std;
// long long  w,h,n;
// bool good(long long  x)
// {
// 	return (x/w)*(x/h)>=n;
// }

//int dp[1000];

// int fib(int n)
// {
//     if (n <= 2) return 1;
//     if(dp[n]!=-1)
//     {
//     	return dp[n];
//     }
//     int x=fib(n - 1) + fib(n - 2);
//     return dp[n]=x;

// }

// void solve()
// {
// 	memset(dp,-1,sizeof(dp));
// 	int n;
// 	cin>>n;
// 	cout<<fib(n); 
// }
map<long long,bool> dp;  
long long n;
bool f(long long i)
{

	if(i>=n)return i==n;
	// if(dp[i]!=-1)
	// {
	// 	return dp[i];
	// }
	if(dp.find(i)!=dp.end())
	{
		return dp[i];
	}
   bool a=f(i*10);
   bool b=f(i*20);
   return dp[i]=a||b;

}
void solve()
{
	//memset(dp,-1,sizeof(dp));
	 dp.clear();
	cin>>n;
	if(f(1))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
	solve();
	}	
	return 0;
}

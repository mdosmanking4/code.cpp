#include <bits/stdc++.h>
using namespace std;

int arr[100],n,x;
int dp[100010][100];
int fix_mod(int a,int b)
{
    return ((a%b)+b)%b;
}
int experssion(int i,int s)
{
    if(i==n)
    {
        return fix_mod(s,x)==0;
    }
    if(dp[i][s]!=-1)return dp[i][s];
    int a=0,b=0;
    a=experssion(i+1,fix_mod(s + arr[i+1],x));
    b=experssion(i+1,fix_mod(s - arr[i+1],x));
    return dp[i][s]= a||b;
}
int main() {
    memset(dp,-1,sizeof(dp));
   cin>>n>>x;
   for(int i=1;i<=n;i++)
   {
    cin>>arr[i];
   }
   if(experssion(1,arr[1]))cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    return 0;
}

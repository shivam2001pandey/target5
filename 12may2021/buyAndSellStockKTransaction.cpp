// k transaction
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    int dp[k+1][n];
    for(int i=0;i<k+1;i++)
        for(int j=0;j<n;j++)
        {
            if(i==0||j==0)
                dp[i][j]=0;
        }
    
    for(int i=1;i<k+1;i++)
    {
        int mx=INT_MIN;
        for(int j=1;j<n;j++)
        {
            dp[i][j]=dp[i][j-1];
            mx=max(mx,dp[i-1][j-1]-arr[j-1]);
            dp[i][j]=max(dp[i][j],mx+arr[j]);
        }
    }
    cout<<dp[k+1][n-1];
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    }
    int mx=INT_MIN;
    int v[n][n];
    v[0][0]=arr[0][0];
    for(int j=1;j<n;j++)
        v[0][j]=arr[0][j]+v[0][j-1];
    for(int i=1;i<n;i++)
        v[i][0]=arr[i][0]+v[i-1][0];
    
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            v[i][j]=max(v[i-1][j],v[i][j-1])+arr[i][j];
        }
    }
    int mx=v[n-1][n-1];
    int count=0;
    int target=v[n-1][n-1]-arr[n-1][n-1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        if(target==v[i][j])
        count++;
    }
   
    cout<<mx<<" "<<count;
    return 0;
}
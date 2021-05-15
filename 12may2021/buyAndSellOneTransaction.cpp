#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int prices[n];
    for(int i=0;i<n;i++) cin>>prices[i];
    int p=INT_MIN,buy=INT_MAX;
    for(int i=0;i<n;i++)
    {
        buy=min(buy,prices[i]);
        p=max(p,prices[i]-buy);
    }
    cout<<p;
    return 0;
}
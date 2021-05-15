// 2 transaction
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int buy1=INT_MAX,buy2=INT_MAX,profit1=INT_MIN , profit2=INT_MIN;
    for(int i=0;i<n;i++)
    {
        buy1=min(buy1,arr[i]);
        profit1=max(profit1,arr[i]-buy1);
        buy2=min(buy2,arr[i]-profit1);
        profit2=max(profit2,arr[i]-buy2);
    }
    cout<<profit2;
    return 0;
}
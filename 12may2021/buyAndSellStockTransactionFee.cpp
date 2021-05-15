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
    int bsp=-arr[0],ssp=0;
    for(int i=1;i<n;i++)
    {
        int nbsp=max(bsp,ssp-arr[i]);
        int nssp=max(ssp,arr[i]+bsp-k);
        bsp=nbsp;
        ssp=nssp;
    }
    cout<<ssp;
    return 0;
}
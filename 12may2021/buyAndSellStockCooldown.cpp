#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int bsp=-arr[0],ssp=0,csp=0;
    for(int i=1;i<n;i++)
    {
        int nbsp=max(bsp,csp-arr[i]);
        int nssp=max(ssp,arr[i]+bsp);
        int ncsp=max(csp,ssp);
        bsp=nbsp;
        ssp=nssp;
        csp=ncsp;
    }
    cout<<ssp;
    return 0;

}
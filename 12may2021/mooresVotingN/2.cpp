// Moores voting algorithm more than N/2 times
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int cand=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(count==0)
            cand=arr[i];
        if(cand==arr[i])
            count++;
        else
            count--;
    }
    count=0;
    for(int i=0;i<n;i++)
    {
        if(cand==arr[i]) count++;
    }
    if(count>n/2) cout<<cand;
    else cout<<-1;
    return 0;
}
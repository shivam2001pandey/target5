#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int maxEndHere=arr[0];
    int maxOverAll=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEndHere=max(maxEndHere+arr[i],arr[i]);
        maxOverAll=max(maxEndHere,maxOverAll);
    }
    cout<<maxOverAll;
    return 0;
}
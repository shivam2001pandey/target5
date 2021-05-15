// infinite transaction
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int b=0,s=0,p=0;
    for(int i=1;i<n;i++) // consider the upstock only
    {
        if(arr[i]>=arr[i-1])
        {
            s++;
        }
        else
        {
            p+=arr[s]-arr[b];
            b=s=i;
        }
    }
    p+=arr[s]-arr[b];
    cout<<p;
    return 0;
}
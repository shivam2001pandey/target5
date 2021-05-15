#include<bits/stdc++.h>
using namespace std;
bool find4Numbers(int arr[], int n, int k)  
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int s=j+1;
            int e=n-1;
            while(s<e)
            {
                if(arr[s]+arr[e]==(k-arr[i]-arr[j]))
                    return true;
                else if(arr[s]+arr[e]<(k-arr[i]-arr[j])) s++;
                else e--;
            }
            
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;
    cin>>k;
    cout<<find4Numbers(arr,n,k);
    return 0;
}

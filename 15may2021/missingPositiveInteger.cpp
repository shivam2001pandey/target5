#include<bits/stdc++.h>
using namespace std;
int missingNumber(int arr[], int n) 
    { 
        // Your code here
        for(int i=0;i<n;i++)
        {
            while(arr[i]<=n && arr[i]>=1 && arr[i]!=arr[arr[i]-1])
            {
                swap(arr[i],arr[arr[i]-1]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=i+1) return i+1;
        }
        return n+1;
    } 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<missingNumber(arr,n);

    return 0;
}

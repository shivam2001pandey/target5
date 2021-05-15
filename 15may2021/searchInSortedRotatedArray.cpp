#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int l, int h, int key){
    //complete the function here
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        if(key==arr[mid])
        {
            return mid;
        }
        else if(arr[mid]>=arr[l])
        {
            if(key>=arr[l] && key<arr[mid])
                h=mid-1;
            else l=mid+1;
                
        }
        else if(arr[mid]<=arr[h])
        {
            if(key>arr[mid] && key<=arr[h])
            {
                l=mid+1;
            }
            else h=mid-1;
        }
        
    }
    return -1;
    
    }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;
    cin>>k;
    cout<<search(arr,0,n-1,k);
    return 0;

}
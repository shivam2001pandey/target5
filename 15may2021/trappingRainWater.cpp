#include<bits/stdc++.h>
using namespace std;
int trappingWater(int height[], int n){
        // Code here
        
        int maxLeft=0;
        int maxRight=0;
        int l=0,h=n-1;
        int ans=0;
        while(l<=h)
        {
            if(height[l]<=height[h])
            {
                if(height[l]>maxLeft)
                    maxLeft=height[l];
                else
                {
                    ans+=(maxLeft-height[l]);
                }
                l++;
            }
            else
            {
                if(height[h]>maxRight)
                    maxRight=height[h];
                else
                {
                    ans+=(maxRight-height[h]);
                }
                h--;
            }
        }
        return ans;
    }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<trappingWater(arr,n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
        int l=0,h=height.size()-1;
        int mx=0;
        while(l<h)
        {
            int minHeight=min(height[l],height[h]);
            mx=max(minHeight*(h-l),mx);
            if(height[l]<height[h]) l++;
            else h--;
        }
        return mx;
    }
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        v[i]=t;
    }
    cout<<maxArea(v);
    return 0;
}

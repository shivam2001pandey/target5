// Approaches
// 1.O(n2)
// 2.nlogn  + two pointer
// 3.O(n) using hashing

// nlogn + two pointer
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int target;
    cin>>target;
    sort(arr,arr+n);
    int i=0,j=n-1;
    while(i<j)
    {
        if(arr[i]+arr[j]<target)
            i++;
        else if(arr[i]+arr[j]>target)
            j--;
        else
        {
            int a = arr[i];
            int b = arr[j];
            cout<<a<<" "<<b;
            while(i<j && arr[i]==a) i++;
            while(i<j && arr[j]==b) j--;
        }
    }
    return 0;
}

// O(n) time   RETURN INDEX
// map<int,int> s;
//         vector<int>v;
           
//         for(int i=0;i<nums.size();i++)
//         {
//            if(s.find(target-nums[i])!=s.end())
//            {
//                   v.push_back(s[target-nums[i]]);
//                   v.push_back(i);
        
//            }   
//            else
//                s[nums[i]]=i;
//         }
//         return v;


// COUNT ALL PAIRS POSSIBLE WITH GIVEN SUM

// int getPairsCount(int arr[], int n, int k) {
//         // code here
//         int ans=0;
//         unordered_map<int,int>mp;
//         for(int i=0;i<n;i++)
//         {
//             mp[arr[i]]++;
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(arr[i]==k-arr[i])
//             {
//                 ans+=(mp[k-arr[i]]-1);
//             }
//             else
//             {
//                 ans+=(mp[k-arr[i]]);
//             }
            
//         }
//         return ans/2;
//     }
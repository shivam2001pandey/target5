//Moores Voting algo n/3 times
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int c1=-1,c2=-1,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(c1==arr[i])
            count1++;
        else if(c2==arr[i])
            count2++;
        else if(count1==0)
        {
            count1=1;
            c1=arr[i];
        }
        else if(count2==0)
        {
            count2=1;
            c2=arr[i];
        }
        else
        {
            count1--;
            count2--;
        }
    }
    int count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(c1==arr[i]) count1++;
        else if(c2==arr[i]) count2++;
    }
    if(count1>n/3) cout<<c1<<"\n";
    if(count2>n/3) cout<<c2;
    return 0;
}

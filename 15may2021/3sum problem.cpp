// 3 sum 
// approaches
// 1.O(n3) brute force
// 2. O(nlogn +n2)
// 3.O(n2)

// O(nlogn +n2)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        // 3 sum problem
    int target=0;
    vector<vector<int> > res;
        if(v.size()==0) return res;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        int front=i+1;
        int back=v.size()-1;
        int sum=target-v[i];
        while(front < back)
        {
            int twoSum=v[front]+v[back];
            if(sum>twoSum) front++;
            else if(sum < twoSum) back--;
            else
            {
                vector<int> temp(3);
                temp[0]=v[i];
                temp[1]=v[front];
                temp[2]=v[back];
                res.push_back(temp);
                while(front<back && v[front]==temp[1]) front++;
                while(front<back && v[back]==temp[2]) back--;
            }
        }
        while(i+1 < v.size() && v[i]==v[i+1]) i++;
    }
return res;
 }
}; 
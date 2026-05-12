class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x : nums){
            freq[x]++;
        }
        int ans=0;
        int max = 0;
        for(auto x : freq){
            if(x.second>max){
                max=x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};
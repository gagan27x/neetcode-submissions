class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums){
            mp[x]++;
        }
        if(mp.size()<nums.size()){
            return true;
        }
        return false;
    }
};
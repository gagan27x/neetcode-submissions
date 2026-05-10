class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n = nums.size();

        for(int i=0;i<n;i++){
            int j=i+1;
            while(j<n){
                if(nums[i]+nums[j]== t){
                    return {i,j};
                }
                j++;
            }
        }
    }
};

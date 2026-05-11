class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pfs = strs[0];

        for(int i=1;i<strs.size();i++){
            int j=0;
            while(strs[i][j]==pfs[j]){
                j++;
            }
            pfs = pfs.substr(0,j);
        }
        return pfs;

    }
};
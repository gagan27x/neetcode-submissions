class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> ss ,tt ;
        for( auto x : s){
            ss[x]++;
        }
        for( auto x : t){
            tt[x]++;
        }

        if(ss!=tt) return 0;
        return 1;
    }
};

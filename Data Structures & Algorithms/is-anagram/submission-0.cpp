class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> sc;
        map<char, int> tc;

        for(auto it:s){
            sc[it]++;
        }
        for(auto it:t){
            tc[it]++;
        }
        
        return sc == tc;
    }
};

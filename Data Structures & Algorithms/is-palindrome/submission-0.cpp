class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> ass;
        for(auto it:s){
            if(isalnum(it)){
                ass.push_back(tolower(it));
            }
        }
        int n = ass.size();
        for(int i=0, j=n-1; i<j; i++, j--){
            if(ass[i] != ass[j]){
                return false;
            }
        }
        return true;
    }
};

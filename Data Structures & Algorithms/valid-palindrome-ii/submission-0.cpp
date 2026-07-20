class Solution {

private:
    bool palindrome(string s){
        int n= s.size();
        for(int i=0, j= n-1; i<=j; i++, j--){
            if(s[i]!=s[j]){
                return false;
            }
        }
        return true;
    }

public:
    
    bool validPalindrome(string s) {
        int n = s.size();
        for(int i=0, j=n-1; i<=j; i++, j--){
            if(s[i] != s[j]){
                return palindrome(s.substr(0,i) + s.substr(i+1)) ||
                palindrome(s.substr(0,j) + s.substr(j+1));
            }
        }
        return true;
    }
};
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        string ans = "";
        int i, j;
        for(i=0, j=0; i<n1 && j<n2; i++,j++){
            ans += word1[i];
            ans += word2[j];
        }

        if(i<n1){
            ans+= word1.substr(i, n1-i);
        }
        if(j < n2){
            ans+= word2.substr(j, n2-j);
        }

        return ans;
    }
};
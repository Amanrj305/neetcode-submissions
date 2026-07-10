class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output;
        for(int i = 0; i<=n; i++){
            int j = i;
            int cnt = 0;
            while(j>0){
                j&= (j-1);
                cnt++;
            }
            output.push_back(cnt);
        }
        return output;
    }
};

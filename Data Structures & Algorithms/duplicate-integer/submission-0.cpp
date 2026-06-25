class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> cnt;
        for(auto it: nums){
            cnt[it]+=1;
        }
        for(auto [num, count]: cnt){
            if (count > 1){
                return true;
            }
        }
        return false;
    }
};
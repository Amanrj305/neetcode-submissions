class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int n = people.size();
        int cnt = 0, l = 0, r= n-1;
        while(l<=r){
            int avail = limit - people[r];
            r--;
            cnt++;
            if(l <= r && avail>= people[l]){
                l++;
            } 
        }
        return cnt;
    }
};
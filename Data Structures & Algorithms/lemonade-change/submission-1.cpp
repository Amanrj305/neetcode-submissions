class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fv = 0, tn = 0;
        for(auto it:bills){
            if(it == 5){
                fv++;
            }
            else if(it == 10){
                if(fv>0){
                    fv--;
                    tn++;
                }
                else{
                    return false;
                }
            }
            else{
                if(fv>0 && tn>0){
                    fv--;
                    tn--;
                }
                else if(fv>2){
                    fv-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};
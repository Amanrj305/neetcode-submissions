class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<string> scores;
        for(auto it:operations){
            if(it=="+"){
                string temp = scores.top();
                int sum = stoi(scores.top());
                scores.pop();
                sum+=stoi(scores.top());
                scores.push(temp);
                scores.push(to_string(sum));
            }
            else if(it == "D"){
                int d = stoi(scores.top());
                d += d;
                scores.push(to_string(d));
            }
            else if(it == "C"){
                scores.pop();
            }
            else{
                scores.push(it);
            }
        }
        int ans = 0;
        while(!scores.empty()){
            ans+=stoi(scores.top());
            scores.pop();
        }
        return ans;
    }
};
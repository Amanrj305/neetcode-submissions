class Solution {
public:
    bool isValid(string s) {
        stack<char> para;
        for(auto it:s){
            if(it == '(' || it == '{' || it == '['){
                para.push(it);
            }
            else if(it == ')'){
                if(!para.empty() && para.top() == '('){
                    para.pop();
                }
                else{
                    return false;
                }
            }
            else if(it == '}'){
                if(!para.empty() && para.top() == '{'){
                    para.pop();
                }
                else{
                    return false;
                }
            }
            else if(it == ']'){
                if(!para.empty() && para.top() == '['){
                    para.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        if(para.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};

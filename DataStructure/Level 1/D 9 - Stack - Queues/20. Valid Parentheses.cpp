class Solution {
public:
    bool isValid(string s) {
        stack<char> charStack;
        int len = s.length();
        
        for (int i = 0; i < len; i++) {
            if(charStack.empty()) {
                if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                    charStack.push(s[i]);
                else return false;
            }
            else if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                    charStack.push(s[i]);
            else {
                if(charStack.top() == '(' && s[i] == ')') charStack.pop();
                else if(charStack.top() == '{' && s[i] == '}') charStack.pop();
                else if(charStack.top() == '[' && s[i] == ']') charStack.pop();
                else return false;
            }
        }
        
        if(charStack.size() == 0) return true;
        return false;
    }
};
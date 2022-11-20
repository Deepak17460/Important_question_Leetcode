class Solution {
public:
    int calculate(string s) {
        stack<int>signs;
        int sign =1;
        long long Num = 0;
        int res = 0;
        // always transform s into ( s )
        signs.push(1); 
        for (char c : s) {
            if (c >= '0' && c <= '9') {
                Num = 10 * Num + c - '0';
            } 
            else if (c == '+' || c == '-') {
                res = res + signs.top() * sign * Num;
                Num = 0;
                sign = (c == '+' ? 1 : -1);
            } 
            else if (c == '(') {
                signs.push(sign * signs.top());
                sign = 1;
            } 
            else if (c == ')') {
                res = res+signs.top() * sign * Num;
                Num = 0;
                signs.pop();
                sign = 1;
            }
        }
        
        if (Num!=0) {
            res= res + signs.top()*sign*Num;
        }
        
        return res;
    }
};
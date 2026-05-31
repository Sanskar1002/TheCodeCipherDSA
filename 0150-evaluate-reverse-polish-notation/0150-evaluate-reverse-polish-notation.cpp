class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string c : tokens){
            if(c=="+" || c =="-" ||c =="*" || c == "/"){
                int op2 = st.top();
                st.pop();
                int op1 = st.top();
                st.pop();
                int ans = 0;
                if(c=="+"){
                    ans = op1 + op2;
                }else if(c=="-"){
                    ans = op1 - op2;
                }else if(c=="*"){
                    ans = op1 * op2;
                }else if(c=="/"){
                    ans = op1 / op2;
                }

                st.push(ans);
            }else{
                st.push(stoi(c));
            }
        }

        return st.top();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
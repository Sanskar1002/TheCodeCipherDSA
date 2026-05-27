class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0) {
            return false;
        }
        stack<char> st;
        for(char br:s){
            if(br == '(' || br=='[' || br == '{'){
                st.push(br);
            }else{
                if(st.empty()) return false;
                char top = st.top();
                if((top == '(' && br != ')') || (top == '[' && br != ']') || (top == '{' && br != '}')) return false;
                st.pop();
            }
        }

        return st.empty();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna
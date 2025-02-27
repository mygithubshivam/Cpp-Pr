class Solution
{
public:
    string reverseParentheses(string s)
    {
        stack<int> st;
        int i, n = s.size();
        for (i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                st.push(i);
            }
            else if (s[i] == ')')
            {
                int start = st.top() + 1;
                int end = i;
                reverse(s.begin() + start, s.begin() + end);
                st.pop();
            }
        }
        string ans;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == ')')
            {
                continue;
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
string RemoveSpecialChar(string s)
{
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
        {
            temp += s[i];
        }
    }
    return temp;
}
bool Ispalindrome(string st)
{
    int s = 0, e = st.length() - 1;
    while (s < e)
    {
        if ((st[s]) != st[e])
        {
            return false;
        }
        s++, e--;
    }
    return true;
}

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string temp = RemoveSpecialChar(s);
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        return Ispalindrome(temp);
    }
};

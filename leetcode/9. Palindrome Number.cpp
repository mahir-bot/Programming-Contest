class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string ss = s;
        ::reverse(ss.begin(),ss.end());
        if(ss==s)
            return true;

        else
            return false;
        
    }
};
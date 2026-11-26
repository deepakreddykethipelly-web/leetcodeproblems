class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        int left=0;
        int right=n-1;
        while(right>left)
        {
            while(right>left&&!isalnum(s[left]))
            left++;
            while(right>left&&!isalnum(s[right]))
            right--;
            if(tolower(s[left])!=tolower(s[right]))
            return false;
            right--;
            left++;
        }
        return true;
    }
};
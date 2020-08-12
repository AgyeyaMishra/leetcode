class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        
        while (i < j) {
            while (i < j) {
                if (!isalpha(s[i]) && !isdigit(s[i])) {
                    i += 1;
                } else {
                    break;
                }
            }
            
            while (i < j) {
                if (!isalpha(s[j]) && !isdigit(s[j])) {
                    j -= 1;
                } else {
                    break;
                }
            }
            
            if (i >= j) {
                break;
            }
            
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            
            i += 1;
            j -= 1;
        }
        
        return true;
    }
};

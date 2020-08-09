class Solution {
public:
    bool isPalindrome(int x) {
       long int original = x, reverse = 0, remainder;
        while(x!=0)
        {
            remainder = x%10;
            reverse = reverse*10 + remainder;
            x/=10;
        }
        if(original!=reverse || original < 0)
            return false;
        else
            return true;
    }
};

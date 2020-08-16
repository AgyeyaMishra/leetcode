class Solution {
public:
int addDigits(int num) {
    int sum=0;
    if(num>=10)
    {
        if(num%9==0)
            return 9;
        else
            num=num%9;
    }
    return num;
 }
};    

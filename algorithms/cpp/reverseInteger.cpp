class Solution {
public:
    int reverse(int x) {
         if(x==INT_MIN)
             return 0;
     int reverseno = 0, remainder = 0;
        if(x>0)
        {
            while(x>0)
            {
             remainder = x%10;
             if (reverseno > (INT_MAX - x%10)/10) 
                return 0;
             reverseno = reverseno*10 + remainder;
             x/=10;
            }
        }
        else if(x<0)
        {
            x = -1 * (x);
            while(x>0)
            {
                remainder = x%10;
                if (reverseno > (INT_MAX - x%10)/10) 
                    return 0;
                reverseno = reverseno *10 +remainder;
                x/=10;
            }
           reverseno = -1 * reverseno;
        }
        return reverseno;
    }
};

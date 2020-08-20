class Solution {
public:
    bool isPowerOfThree(int n) {
         if(n==1)
            return true;
        
        else{
        
        label:
        if(n==0)
            return false;
        
        if(n==3)
            return true;
        
        else if(n%3==0)       
            
        {
            n=n/3;
            goto label;
             
        }
    }
        return false;
        
    }
};

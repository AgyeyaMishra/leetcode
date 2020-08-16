class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        
        else{
        
        label:
        if(n==0)
            return false;
        
        if(n==2)
            return true;
        
        else if(n%2==0)       
            
        {
            n=n/2;
            goto label;
             
        }
    }
        return false;
        
   }
};

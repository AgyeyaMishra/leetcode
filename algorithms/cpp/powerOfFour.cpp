class Solution {
public:
    bool isPowerOfFour(int num) {
         if(num==1)
            return true;
        
        else{
        
        label:
        if(num==0)
            return false;
        
        if(num==4)
            return true;
        
        else if(num%4==0)       
            
        {
            num=num/4;
            goto label;
             
        }
    }
        return false;
        
    }
};

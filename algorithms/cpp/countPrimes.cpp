class Solution {
public:
    int countPrimes(int n) {
        int i, j, flag, count = 1;
        if(n<3)
            return 0;
         for(i=3; i<n; i+=2){
            int limit=(int)sqrt(i)+1;
            flag = 0;
            for(j = 3; j <= limit; j+=2){
                if(i%j==0){
                    flag=1;
                    break;  
                }          
            }
         if(flag==0)
         count++;
        }
        return count;
    }
};

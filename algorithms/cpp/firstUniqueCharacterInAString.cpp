class Solution {
public:
    int firstUniqChar(string s) {
        int i = 0, j, flag;
        while(s[i]!='\0')
        {
            flag=0;
            for(j=0; s[j]!='\0'; j++)
            {
                if(i==j)
                    continue;
                
                if(s[i]==s[j])
                {
                    flag = 1;
                    break;
                }
                
                  
            }
            if(flag==1)
                i++;
            else if(flag==0)
                break;
        }
        if(flag==0)
            return i;
        else
            return -1;
    }
};

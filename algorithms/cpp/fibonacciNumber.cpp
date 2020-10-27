class Solution {
public:
    int fib(int N) {
        if(N>0 && N!=1)
            return (fib(N-1) + fib(N-2));
        else if(N==1)
            return 1;
        else 
            return 0;
    }
};

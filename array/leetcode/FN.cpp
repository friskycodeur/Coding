// Runtime: 8 ms
// Memory Usage: 5.8 MB

class Solution {
public:
    int fib(int n) {
        if(n<=1)
            return n;
        else if(n==2)
            return 1;
        else
            return fib(n-1)+fib(n-2);
        
    }
};
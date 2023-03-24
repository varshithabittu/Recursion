class Solution {
public:
    int climbStairs(int n) {
        if(n<0)
        {
            return 0;
        }
        if(n==0)
        {
            return 1;
        }
      return climbStairs(n-1)+climbStairs(n-2); // we can take one step or 2 steps to reach goal f(n)=f(n-1)+f(n-2)
        
    }
};

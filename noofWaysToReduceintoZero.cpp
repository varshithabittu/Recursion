class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        return rec(num,count);
    }
    int rec(int num,int count)
    {
        if(num==0) //Base condition as we known we need to stop when we reach the 0th step
            return count;
        if(num%2==0){
            return rec(num/2,count+1);}
        return rec(num-1,count+1);
    }
    
};

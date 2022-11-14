class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        double x=log2(n);
        int y=x;
        if(x==y)
            return true;
        else return false;
        
    }
};

class Solution {
public:
    int numberOfSteps(int n) {
        int c=0;
        while(n!=0){
            int i=n;
            c++;
            if((i&1)==0) n=n/2;
            else n=n-1;
        }
        return c;
    }
};

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        int mx = INT_MIN;
        for(auto i:nums){
            m[i]++;
            mx = max(mx,m[i]);
        }
        int c=0;
        for(auto j:nums){
            if(m[j]==mx)
            c++;
        }
        return c;
    }
};
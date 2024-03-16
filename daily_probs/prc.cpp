// #include <iostream>
// #include <string>
// using namespace std;

// int a=10;
// int main(){
//     int a=5;
//     cout<<::a;
//     return 0;
// }



//or
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v,v1;
        int a=nums1.size(),b=nums2.size();
        unordered_map<int,int>m;

        if(a>b){
            for(auto i:nums1)
            m[i]++;
            for(auto j:nums2){
                if(m.find(j)!=m.end() && m[j]>0){
                m[j]--;
                v.push_back(j);
                }
            }
            // m[i]++;

        }
        else{
            for(auto i:nums2)
            m[i]++;
            for(auto j:nums1){
                if(m.find(j)!=m.end() && m[j]>0){
                m[j]--;
                v.push_back(j);
                }
            }
        }
    unordered_set<int>s;
    for(auto k:v)
    s.insert(k);

    for(auto l:s)
    v1.push_back(l);
    return v1;
        
    }
};
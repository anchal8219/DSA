class Solution {
public:
    bool checkRecord(string s) {
        if (s.size() <= 1)
            return true;
        
        int Acount = 0, lCount = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L') {
                lCount++;
                if (lCount > 2)
                    return false;
            }
            else {
                lCount = 0;
                if (s[i] == 'A')
                    Acount++;
                if (Acount > 1)
                    return false;
            }
        }
        return true;
    }
};

or

class Solution {
public:
    bool checkRecord(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++)
        mp[s[i]]++;
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='L') c++;
            else{
                if(c>=3 || mp['A'] >= 2) return false;
                c=0;
            }
        }
        if(c>=3 || mp['A'] >= 2) return false;
        else return true;
    }
};

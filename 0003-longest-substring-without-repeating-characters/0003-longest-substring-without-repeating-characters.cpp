class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_map<char,int> mp;
        int ans = 0;
        int n = str.length();
        int s = 0;
        int e = 0;
        while(e<n && mp[str[e]]!=1){
            mp[str[e]]++;
            e++;
        }
        ans = max(ans,e);
        if(e==n){
            return e;
        }
        while(e<n){
            while(mp[str[e]]!=0){
            mp[str[s]]--;
            s++;
        }
        while(e<n && mp[str[e]]!=1){
            mp[str[e]]++;
            e++;
        }
        ans = max(ans,e-s);
        }








        return ans;

    }
};
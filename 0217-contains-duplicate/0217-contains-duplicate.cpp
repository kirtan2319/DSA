class Solution {
public:
    bool containsDuplicate(vector<int>& A) {
        int n = A.size();
        unordered_map<int,int> mp;
        for(int i = 0; i<n; i++){
            if(mp[A[i]] == 2){
                return true;
            }
            mp[A[i]] = 2;
        }
        return false;
    }
};
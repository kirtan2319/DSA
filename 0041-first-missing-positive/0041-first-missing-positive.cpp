class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int maxi = -1;
        for(int i = 0; i<n; i++){
            maxi = max(maxi,nums[i]);
        }
        unordered_map<int,int> mp;
        for(int i = 0; i<=n; i++){
            mp[i] = 0;
        }
        for(int i = 0; i<n; i++){
            mp[nums[i]]++;
        }
        for(int i = 1; i<=n; i++){
            if(mp[i] == 0){
                return i;
            }
        }
        return maxi+1;
    }
};
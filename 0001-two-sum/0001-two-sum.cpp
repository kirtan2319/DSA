class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,vector<int>> mp;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            mp[nums[i]].push_back(i);
        }
        sort(nums.begin(),nums.end());

        int e = n-1;
        int s = 0;
        vector<int>ans;        
        int sum = nums[s]+nums[e];
        while(s<e){
             if(sum==target){
                 if(nums[s]==nums[e]){
                     ans.push_back(mp[nums[s]][0]);
                     ans.push_back(mp[nums[s]][1]);
                     return ans;
                 }
                 ans.push_back(mp[nums[s]][0]);
                 ans.push_back(mp[nums[e]][0]);
                 return ans;
             }
             else if(sum>target){
                 e--;
                 sum = nums[s]+nums[e];
             }
             else{
                 s++;
                 sum = nums[s]+nums[e];
             }
        }
        
        return ans;
    }
};
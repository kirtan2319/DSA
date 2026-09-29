class Solution {
public:
    vector<vector<int>> ans;
     void solve(int arr[50],int n, int target, vector<int> a,int k){
         if(target<0){
             return;
         }
         else if(target == 0){
             ans.push_back(a);
             return;
         }
         else{
             for(int i = k; i<50; i++){
                 if(arr[i]==0){
                     continue;
                 }
                 else{
                     a.push_back(i+1);
                     arr[i]--;
                     solve(arr,n,target-i-1,a,i);
                     a.pop_back();
                     arr[i]++;
                 }
             }
         }
     }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> a;
        int arr[50];
        int n = candidates.size();
        for(int i =0; i<50; i++,0){
            arr[i] =0;
        }
        for(int i =0;i<n; i++){
            arr[candidates[i] - 1]++;
        }
        solve(arr,n,target,a,0);
        return ans;
    }

};
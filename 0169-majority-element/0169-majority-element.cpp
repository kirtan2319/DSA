class Solution {
public:
    int majorityElement(vector<int>& A) {
        int n = A.size();
        if(n <= 2){
            return A[0];
        }
        int ele = A[0];
        int count  = 1;
        for(int i = 1; i<n; i++){
            if(count == 0){
                ele = A[i];
            }
            if(A[i] == ele){
                count++;
            }
            else{
                count --;
            }
        }
        return ele;
    }
};
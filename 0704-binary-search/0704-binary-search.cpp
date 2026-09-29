class Solution {
public:
    int search(vector<int>& A, int B) {
       int n  = A.size();
       int s = 0;
       int e = n-1;
       while(s<=e){
        int mid = (e+s)/2;
        if(A[mid] == B){
            return mid;
        }
        else if(A[mid]>B){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
       }
       return -1;   
    }
};
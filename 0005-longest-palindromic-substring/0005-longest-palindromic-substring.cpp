class Solution {
public:


string ans = ""; 
int k = 0;
void oddchecker(string s, int i, int n){
     int l = i;
     int r = i;
     while(r<n && l>=0){
         if(s[l] == s[r]){
             l--;
             r++;
         }
         else{
             break;
         }
     }
     if(r-l-1 > k){
         k = r-l-1;
         ans = s.substr(l+1, r-l-1);
     }
   // k = max(k,r-l+1);
}

void evenchecker(string s, int i, int n){
    int l = i;
    int r = i+1;
    while(r<n && l>=0){
         if(s[l] == s[r]){
             l--;
             r++;
         }
         else{
             break;
         }
     }
     if(r-l-1 > k){
         k = r-l-1;
         ans = s.substr(l+1, r-l-1);
     }


}


    string longestPalindrome(string s) {
        
     int n = s.size();
         for(int i = 0; i<n; i++){
            oddchecker(s,i,n);
            evenchecker(s,i,n);
         }
         return ans;
    
    }
};
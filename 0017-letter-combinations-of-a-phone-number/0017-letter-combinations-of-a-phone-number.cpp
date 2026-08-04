class Solution {
public:
void rec(int n, string p, int i, vector<string> &ans, string digits, string dtl[10]){
      if(i==n){
          ans.push_back(p);
          return;
      }
     int d = int(digits[i]) - 48;
     
      for(int q = 0; q<dtl[d].size(); q++){
          p.push_back(dtl[d][q]);
        rec(n,p,i+1,ans,digits,dtl);
          p.pop_back();
      }


}

    vector<string> letterCombinations(string digits) {
        string dtl[10];
        dtl[2] = "abc";
        dtl[3] = "def";
        dtl[4] = "ghi";
        dtl[5] = "jkl";
        dtl[6] = "mno";
        dtl[7] = "pqrs";
        dtl[8] = "tuv";
        dtl[9] = "wxyz";

        int n = digits.size();
        string s = "";
        vector<string> ans;
        if(n==0){
            return ans;
        }
        rec(n,s,0,ans,digits,dtl);
        return ans;
    }
};
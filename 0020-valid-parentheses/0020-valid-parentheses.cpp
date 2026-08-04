class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
           int n = s.length();
           for(int i = 0; i<n; i++){
               if(st.empty() == 1 && (s[i] == ')' || s[i] == '}' || s[i] == ']')){
                   return 0;
               }   

               if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                   char k = s[i];
                   st.push(k);
               }
               else{
                   
                if((s[i] == ']') && (st.top() == '[') || ((s[i] == ')') && (st.top() == '(')) ||(s[i] == '}' && st.top() == '{')){
                    st.pop();
                }   
                else{
                    return 0;
                }
                }
               } 
           

           if(st.empty()){
               return 1;
           }
           else{
              return 0;
           }
           return 1;
         }
    
};
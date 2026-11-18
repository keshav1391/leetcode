class Solution {
public:
    bool isPalindrome(string s) {
        bool flag = true;
        string ans ="";
        int left =0;
        int right = s.length() -1;
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                ans+= tolower(s[i]);
            }
        }
        left =0;
        right = ans.length() -1;
        while(left<right){
            if(ans[left] != ans[right]){
                flag = false;
                break;
            }
            left++;
            right--;
        }
        return flag;
        
    }
};
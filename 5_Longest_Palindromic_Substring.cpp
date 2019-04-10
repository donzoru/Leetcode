class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        for(int i=0,j;i<s.length();++i){
            for(j=1;i-j>=0 && i+j<s.length() && s[i-j]==s[i+j];++j);
            if((j-1)*2+1 > ans.size()) ans = s.substr(i-j+1,(j-1)*2+1);
            
            for(j=0;i-j>=0 && i+j+1<s.length() && s[i-j]==s[i+j+1];++j);
            if(j*2 > ans.size()) ans = s.substr(i-j+1,j*2);
        }
        return ans;
    }
};

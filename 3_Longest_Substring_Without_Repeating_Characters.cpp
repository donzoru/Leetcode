class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool has[128]={false};
        int ans=0;
        for(int i=0,j=0;i<=j;){
            while(j<s.length() && has[s[j]]==false){
                has[s[j]] = true;
                ++j;
            }
            if(j-i>ans) ans = j-i;
            if(i<s.length()){
                has[s[i]] = false;
                ++i;
            }else break;
        }
        return ans;
    }
};
